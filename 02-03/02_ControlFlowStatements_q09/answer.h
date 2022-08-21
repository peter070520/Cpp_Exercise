#include <iostream>
#include <cstring>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int n, i, neg=0, pos=0; 
    float arr[100];

    cin >> n;
    for (i=1; i<=n; ++i){
        cin >> arr[i];
    }
    for (i=1; i<=n; ++i){
        if (arr[i]>=0){
            pos += arr[i];
        }
        else if (arr[i]<0){
            neg += arr[i];
        }
    }
    cout << pos << " " << neg << endl;
    /// END  <STUDENT ANSWER>
}
