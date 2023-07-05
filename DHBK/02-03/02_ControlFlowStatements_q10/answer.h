#include <iostream>
#include <cstring>

using namespace std;


void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int i, n, a=0, b=1, c=1;
    cin >> n;
    do{
        cin >> n;
    }
    while (n<1 || n>90);
    if (n==0 || n==1){
        c = n;
    }
    else{
        for (i=3; i<n; ++i){
            a = b;
            b = c;
            c = a + b;
        }
    }
    cout << c;
    /// END  <STUDENT ANSWER>
}
