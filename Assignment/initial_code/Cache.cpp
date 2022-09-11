#include "main.h"
#include "Cache.h"
#include <stack>
#include <queue>
stack<Elem> st;
queue<Elem> qu;

int i = 0, k = 0, j = 0;

class BinarySearchTree
{
    struct node
    {
        Elem *p;
        node *left;
        node *right;
    };

    node *root;

    node *makeEmpty(node *root)
    {
        if (root == NULL)
            return NULL;
        {
            makeEmpty(root->left);
            makeEmpty(root->right);
            delete root;
        }
        return NULL;
    }

    node *insert(int x, Data *y, node *root)
    {
        if (root == NULL)
        {
            root = new node;
            root->p->addr = x;
            root->p->data = y;
            root->left = root->right = NULL;
        }
        else if (x < root->p->addr)
            root->left = insert(x, y, root->left);
        else if (x > root->p->addr)
            root->right = insert(x, y, root->right);
        return root;
    }

    void inorder(node *root)
    {
        Elem X(root->p->addr, root->p->data, root->p->sync);
        if (root == NULL)
            return;

        inorder(root->left);
        X.print();
        inorder(root->right);
    }

    void preorder(node *root)
    {
        Elem X(root->p->addr, root->p->data, root->p->sync);
        if (root == NULL)
            return;
        X.print();
        preorder(root->left);
        preorder(root->right);
    }

    node *find(node *root, int x)
    {
        if (root == NULL)
            return NULL;
        else if (x < root->p->addr)
            return find(root->left, x);
        else if (x > root->p->addr)
            return find(root->right, x);
        else
            return root;
    }

    node *findMin(node *root)
    {
        if (root == NULL)
            return NULL;
        else if (root->left == NULL)
            return root;
        else
            return findMin(root->left);
    }

    node *remove(int x, node *root)
    {
        node *temp;
        if (root == NULL)
            return NULL;
        else if (x < root->p->addr)
            root->left = remove(x, root->left);
        else if (x > root->p->addr)
            root->right = remove(x, root->right);
        else if (root->left && root->right)
        {
            temp = findMin(root->right);
            root->p->addr = temp->p->addr;
            root->right = remove(root->p->addr, root->right);
        }
        else
        {
            temp = root;
            if (root->left == NULL)
                root = root->right;
            else if (root->right == NULL)
                root = root->left;
            delete temp;
        }

        return root;
    }

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    ~BinarySearchTree()
    {
        root = makeEmpty(root);
    }

    void insert(int x, Data *y)
    {
        root = insert(x, y, root);
    }

    void display()
    {
        inorder(root);
    }

    void displaypreOrder()
    {
        preorder(root);
    }

    Elem *search(int x)
    {
        root = find(root, x);
        if (root == NULL)
            return NULL;
        else
            return root->p;
    }

    void remove(int x)
    {
        root = remove(x, root);
    }
};
Data *Cache::read(int addr)
{
    BinarySearchTree check;
    return check.search(addr)->data;
}
Elem *Cache::put(int addr, Data *cont)
{
    BinarySearchTree check;
    Elem A(addr, cont, true);
    if (p <= MAXSIZE)
    {
        check.insert(addr, cont);
        arr[i]->addr = addr;
        arr[i]->data = cont;
        st.push(A);
        qu.push(A);
        i++;
        return NULL;
    }
    else
    {
        if (addr % 2 == 0)
        {
            Elem a(qu.front().addr, qu.front().data, false);
            Elem *b;
            *b = a;
            check.remove(qu.front().addr);
            qu.pop();
            qu.push(A);
            check.insert(addr, cont);
            arr[k]->addr = addr;
            arr[k]->data = cont;
            arr[k]->sync = false;
            k++;
            if (k == MAXSIZE)
                k = 0;
            st.push(A);
            return b;
        }
        else
        {
            Elem a(st.top().addr, st.top().data, false);
            Elem *b;
            *b = a;
            st.pop();
            st.push(A);
            qu.push(A);
            check.insert(addr, cont);
            arr[MAXSIZE - j]->addr = addr;
            arr[MAXSIZE - j]->data = cont;
            arr[MAXSIZE - j]->sync = false;
            j++;
            if (j > MAXSIZE)
                j = 0;
            return b;
        }
    }
}
Elem *Cache::write(int addr, Data *cont)
{
    BinarySearchTree check;
    Elem *ptr = check.search(addr);
    if (ptr == NULL)
    {
        return put(addr, cont);
    }
    else
    {
        ptr->data = cont;
        for (int m = 0; m < p; m++)
        {
            if (m == addr)
            {
                arr[m]->data = cont;
                break;
            }
        }
    }
    return NULL;
}
void Cache::print()
{
    while (st.size() != 0)
    {
        st.top().print();
        st.pop();
    }

}
void Cache::preOrder()
{
    BinarySearchTree check;
    check.displaypreOrder();
}
void Cache::inOrder()
{
    BinarySearchTree check;
    check.display();
}