#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
// TODO
class Coordinate
{
public:
    Coordinate(float, float);
    void setX(float);
    void setY(float);
    float getX();
    float getY();
    float distanceTo(const Coordinate &other);

private:
    float x;
    float y;
};
Coordinate::Coordinate(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Coordinate::setX(float x)
{
    this->x = x;
}

void Coordinate::setY(float y)
{
    this->y = y;
}

// void Coordinate::setXY(float x, float x){
//     x=this->setX;
//     y= this->setY;
// }

float Coordinate::getX()
{
    return x;
}

float Coordinate::getY()
{
    return y;
}

float Coordinate::distanceTo(const Coordinate &other)
{
    float result = 0;
    result = abs(this->x - other.x) + abs(this->y - other.y);
    return result;
}

/// END  <STUDENT ANSWER>
