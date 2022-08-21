#include <iostream>
#include <iomanip>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    
    int n, i;
    float arr[100], max=0;

    cin >> n;
    for (i=1; i<=n; i++){
        cin >> arr[i];
    } 
    
    for (i=1; i<=n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << fixed << setprecision(2) << max;
    /// END  <STUDENT ANSWER>
}
