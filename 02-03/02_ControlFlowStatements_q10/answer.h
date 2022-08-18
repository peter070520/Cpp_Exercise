#include <iostream>
#include <cstring>

using namespace std;

int Fib(int n){
    n = Fib(n-1)+Fib(n-2);
    return n;
}

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int n; //, num1=0, num2=1, temp=0;
    cin >> n;

    if ((n>=1) && (n<=90)){
        if (n==1) {
            n = 0;
            cout << n;
        }
        else if(n==2){
            n=1;
            cout << n;
        }
        else {
            n= Fib(n);
            cout << n;
        }
        // for(int i; i <=n; i++){
        //     if(n==1 || n||2){
        //         n=1;
        //         cout << n;
        //         continue;
        //     }
        //     temp = num1 + num2;
        //     num1 = num2;
        //     num2 = temp;
        // }
        // cout << temp;
    }
    cout << n;
    /// END  <STUDENT ANSWER>
}