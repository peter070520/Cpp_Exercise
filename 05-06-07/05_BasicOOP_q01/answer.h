#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
class Integer {
private:
    int n;
    int* arr;

public:
    Integer(){

    }
    ~Integer(){
        delete[] arr;
    }
    string str() const{

    }
};
/// END  <STUDENT ANSWER>