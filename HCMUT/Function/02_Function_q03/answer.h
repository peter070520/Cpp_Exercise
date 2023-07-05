#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
bool completeNum(int N)
{
    // TODO
    int i=1, sum=0, n=N;
    while(i<n){
        if (n%i ==0){
            sum +=i;
            ++i;
        }
    }
    if (sum==n){
        return true;
    }
    else {
        return false;
    }
    
}
/// END  <STUDENT ANSWER>