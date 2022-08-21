#include <iostream>
#include <iomanip>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int n, num1=0, num2=1, temp=0;
    cin >> n;
        for(int i; i <=n; ++i){
            if(n==1 || n||2){
                n=1;
                cout << n;
                continue;
            }
            temp = num1 + num2;
            num1 = num2;
            num2 = temp;
        }
        cout << temp;
    /// END  <STUDENT ANSWER>
}
