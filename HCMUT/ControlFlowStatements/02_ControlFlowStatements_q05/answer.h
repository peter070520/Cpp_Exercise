#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int num1, num2, num3;
    float delta, x1, x2;
    cin >> num1 >> num2 >> num3;
    if (num1!=0)
    {
        delta = float(pow(num2,2) - 4*(num1*num3));    
        if (delta > 0)
        {
            cout<<"Two solutions \n";
            x1 = -(num2 + sqrt(delta))/2*num1;
            x2 = -(num2 - sqrt(delta))/2*num1;
            cout<<"x1 = "<< x1 << endl;
            cout<<"x2 = "<< x2 << endl;
            return;
        }else if (delta = 0)
        {
            cout<<"One solution \n";
            x1 = -num2/2*num1;
            cout<<"x1 = x2 = "<< x1 << endl;
            return;
        }else
        {
            cout<<"No solution \n";
            return;
        }
    }else
    {
        cout<<"Countless solutions\n";
        return;
    }
    /// END  <STUDENT ANSWER>
}
