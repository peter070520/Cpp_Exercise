#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
// TODO
class Array
{
public:
    Array(int size, int initValue);
    ~Array();

    void setAt(int idx, int value);
    void print();
    int getAt(int idx);

    Array(const Array &other); // Copy constructor

    Array &operator=(const Array &other)
    {
        this->size = other.size;
        for (int i = 0; i < this->size; i++)
            this->p[i] = other.p[i];
        return *this;
    }
    int &operator[](int idx)
    {
        if (idx < 0 || idx >= this->size)
        {
            throw -1;
        }
        return this->p[idx];
    }

private:
    int size;
    int *p;
};

Array::Array(int size, int initValue)
{
    this->size = size;
    this->p = new int[size];
    for (int i = 0; i < size; i++)
    {
        this->p[i] = initValue;
    }
}

Array::Array(const Array &other)
{
    this->size = other.size;
    this->p = new int[this->size];
    for (int i = 0; i < size; i++)
    {
        this->p[i] = other.p[i];
    }
}

Array::~Array()
{
    delete[] p;
}

void Array::print()
{
    for (int i = 0; i < size; ++i)
    {
        this->p[i];
        if (i != size - 1)
        {
            cout << *(p + i) << " ";
        }
        else
        {
            cout << *(p + i) << endl;
        }
    }
}

void Array::setAt(int idx, int value)
{
    if (idx < 0 || idx >= size)
    {
        throw -1;
    }
    else
    {
        this->p[idx] = value;
    }
}

int Array::getAt(int idx)
{
    if (idx < 0 || idx >= this->size)
    {
        throw -1;
    }
    else
    {
        return this->p[idx];
    }
}

/// END  <STUDENT ANSWER>
