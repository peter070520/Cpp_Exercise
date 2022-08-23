#include <iostream>
#include <iomanip>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int i, f[20], n;
    cin >> n;
    f[0] = 0;
    f[1] = 1;
    for (i=2; i<n; ++i){
        f[i] = f[i-1] + f[i-2];
    }
    for (i=0; i<n; ++i){
        cout << f[i] << " ";
    }
    /// END  <STUDENT ANSWER>
}
