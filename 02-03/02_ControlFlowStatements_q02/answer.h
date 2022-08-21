#include <iostream>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    float number_1, number_2, number_3;
    float number_max = number_1;
    cin >> number_1 >> number_2 >> number_3;
    if (number_max < number_2){
        number_max = number_2;
        cout << number_max;
    }
    else if (number_max < number_3){
        number_max = number_3;
        cout << number_max;
    } 
    else {
        cout << number_max;
    }
    /// END  <STUDENT ANSWER>
}
