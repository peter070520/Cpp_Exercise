#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
// TODO
class Book
{
public:
    Book(const char *name);
    ~Book();
    void display();

private:
    char *name;
};

Book::Book(const char *name)
{
    this->name = new char(strlen(name));
    strcpy(this->name, name);
}

Book::~Book()
{
    delete[] this->name;
}

void Book::display()
{
    cout << "Book: " << name;
}

/// END  <STUDENT ANSWER>
