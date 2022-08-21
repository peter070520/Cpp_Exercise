#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int number_1, number_2, number_3, side_1, side_2, side_3;
    float temp;
    cin >> number_1 >> number_2 >> number_3;
    side_1 = pow(number_1, 2);
    side_2 = pow(number_2, 2);
    side_3 = pow(number_3, 2);
    if (number_1 == number_2 || number_1 == number_3 || number_2 == number_3) {    
        cout << "The triangle is Isosceles triangle.";
    }
    else if (number_1 == number_2 == number_3) {
        cout << "The triangle is Equilateral triangle.";
    }
    else if ((side_1==(side_2+side_3)) || (side_2==(side_1+side_3)) || (side_3=(side_1+side_2))){        
        cout << "The triangle is Right-angled triangle.";
    } 
    else {
        cout << "The triangle is Scalene triangle.";
    }
    /// END  <STUDENT ANSWER>
}
