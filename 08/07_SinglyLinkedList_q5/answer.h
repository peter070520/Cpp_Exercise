#include <iostream>
#include <string>
#include <cstring>
#include <climits>
#include <utility>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <algorithm>
using namespace std;

class LLNode
{
public:
    int val;
    LLNode *next;
    LLNode();
    LLNode(int val, LLNode *next);
    template <typename InputIterator>
    static LLNode *createWithIterators(InputIterator first, InputIterator last);
    static void printList(LLNode *head);
    void clear();
};

LLNode::LLNode() : val(0), next(nullptr) {}

LLNode::LLNode(int val, LLNode *next = nullptr) : val(val), next(next) {}

template <typename InputIterator>
LLNode *LLNode::createWithIterators(InputIterator first, InputIterator last)
{
    LLNode *trav = nullptr;
    LLNode *head = nullptr;
    while (first != last)
    {
        if (trav == nullptr)
        {
            head = new LLNode(*first);
            trav = head;
        }
        else
        {
            trav->next = new LLNode(*first);
            trav = trav->next;
        }
        first = first + 1;
    }
    return head;
}

void LLNode::printList(LLNode *head)
{
    cout << "[";
    LLNode *trav = head;
    while (trav != nullptr)
    {
        cout << trav->val;
        trav = trav->next;
        if (trav != nullptr)
            cout << ", ";
    }
    cout << "]";
}

void LLNode::clear()
{
    LLNode *pre = this;
    LLNode *trav = this;
    while (trav != nullptr)
    {
        trav = trav->next;
        delete pre;
        pre = trav;
    }
}

/// BEGIN  <STUDENT ANSWER>
LLNode *addLinkedList(LLNode *l0, LLNode *l1)
{
    // STUDENT ANSWER
    int flag = 0;
    LLNode *head = nullptr;
    LLNode *trav = nullptr;
    if (trav == nullptr)
    {
        head = new LLNode(0);
        trav = head;
    }
    while (l0 != NULL && l1 != NULL)
    {
        trav->val += l0->val + l1->val;
        if (trav->val > 9)
        {
            trav->next = new LLNode(1);
            flag = 1;
            trav->val = (trav->val) % 10;
        }
        else
        {
            trav->next = new LLNode(0);
        }
        trav = trav->next;
        l0 = l0->next;
        l1 = l1->next;
    }
    if (l0 == NULL && l1 == NULL)
    {
        return head;
    }
    else
    {
        LLNode *l = (l0 != NULL ? l0 : l1);
        while (l != NULL)
        {
            if (flag == 1)
            {
                trav->next = new LLNode(1);
                trav = trav->next;
                trav->val += l->val;
                flag = 0;
            }
            else
            {
                l = l->next;
                trav->next = new LLNode(0);
                trav = trav->next;
                trav->val += l->val;
            }
        }
        return head;
    }
}

/// END  <STUDENT ANSWER>