#include <iostream>
#include <cstring>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int number, number_default=100;
    cout << "Input number: ";
    cin >> number;
    if (number > number_default){
        cout << number << " is greater than " << number_default << "." << endl;
    } 
    else if (number >=0 && number <= number_default){
        cout << number << " is lower than " << number_default << "." << endl;
    }
    /// END  <STUDENT ANSWER>
}
