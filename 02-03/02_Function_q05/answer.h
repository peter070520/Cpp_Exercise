#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
bool isSpecialNumber(int n) {
    // TODO: Write your code
    int i;
    if (n>=0 || n<=100){        
        if (n<=1){
            return false;
        }
        for (i=2; i<n; ++i){
            if (n%i ==0){
                return false;
            }
        }
        return true;
    }
}
/// END  <STUDENT ANSWER>