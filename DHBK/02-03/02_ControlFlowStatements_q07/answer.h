#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int n, i;
    float arr[100], sum=0, avg;

    cin >> n;
    for (i=1; i<=n; i++){
        //cout /* << fixed << setprecision(2) */ << arr[i] << endl;
        cin >> arr[i];

    }
    
    for (i=1; i<=n; i++){
        sum += arr[i];
   }
    avg = sum/n;
    cout << fixed << setprecision(2) << avg;
    /// END  <STUDENT ANSWER>
}
