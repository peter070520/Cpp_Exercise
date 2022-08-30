#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
class Room
{
private:
    int length, breadth, height;

public:
    int calculateArea(int length, int breadth, int height);
    int calculateVolume(int length, int breadth, int height);
    Room(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
};

int Room::calculateArea(int length, int breadth, int height)
{
    return length * height;
}
int Room::calculateVolume(int length, int breadth, int height)
{
    return length * breadth * height;
}
/// END  <STUDENT ANSWER>
