#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
class ClockType
{
public:
    ClockType(int, int, int); // constructor with parameters
    ClockType();              // default constructor

    void printTime() const;

private:
    int hr;
    int min;
    int sec;
};

ClockType::ClockType(int hr, int min, int sec)
{
    this->hr = hr;
    this->min = min;
    this->sec = sec;
}

ClockType::ClockType()
{
    this->hr = 0;
    this->min = 0;
    this->sec = 0;
}

void ClockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";
    if (min < 10)
        cout << "0";
    cout << min << ":";
    if (sec < 10)
        cout << "0";
    cout << sec;
}

// TODO

/// END  <STUDENT ANSWER>
