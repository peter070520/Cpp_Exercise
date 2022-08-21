#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
bool isPalindrome(const char* str) {
    // TODO: Write your code here
    int i, n=strlen(str), flag=0;
    for (i=0; i<n; ++i){
        if(str[i] != str[n-i-1]){
            flag=1;
        }
    }
    if(flag){
        return false;
    }
    else {
        return true;
    }
}
/// END  <STUDENT ANSWER>