#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    float a, b, c, delta, x, x1, x2;
    cin >> a >> b >> c;
    if (a!=0) {
        if (b==0){
            if (c!=0){
                x = sqrt(-c/a);
                cout << x << endl;
            }
            else if (c==0) {            
                cout << "Countless solutions";
            }
        }
        else {
            delta = pow(b,2)-(4*a*c);
            if (delta ==0){
                x1 = -b/(2*a);
                x2 = x1;
                cout << x1 << endl << x2;
            }
            else if (delta > 0){
                x1 = (-b+sqrt(delta,2))/(2*a);
                x2 = (-b-sqrt(delta,2))/(2*a);
                cout << x1 << endl << x2;
            }
            else if (delta < 0){
                cout << "No solution";
            }
        }
    }
    else if (a==0)
    {
        x=-c/b;
        cout << x << endl;
    }
    else {
        cout << "No solution";
    }
    /// END  <STUDENT ANSWER>
}
