#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void tempMain() {
    /// BEGIN  <STUDENT ANSWER>
    int n, i;
    float x, result1=1, result2=1;

    cin >> x >> n;

    if ((n>=0) && (x!=0)){
        for (i=1; i<=n; i++){
            result1 = result1*x;
        }
        cout << fixed << setprecision(2) << result1 << " ";
        
        for (i=1; i<=n; i++){
            result2 = result2*(1/x);
        }
        cout << fixed << setprecision(2) << result2;
    }

    /// END  <STUDENT ANSWER>
}
