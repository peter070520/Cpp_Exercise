#include <iostream>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int percent=100;
    float total, result;
    cin >> total;
    if (total<= 300){
        if (total <=100){
            result = total*5/percent;
            cout << "With total sales of " << total << " million VND, the " << endl << "commission receive is " << result << " million VND.";
        }
        else {
            result = total*10/percent;
            cout << "With total sales of " << total << " million VND, the " << endl << "commission receive is " << result << " million VND.";
        }
    } 
    else {
        result = total*20/percent;
        cout << "With total sales of " << total << " million VND, the " << endl << "commission receive is " << result << " million VND.";
    }
    /// END  <STUDENT ANSWER>
}
