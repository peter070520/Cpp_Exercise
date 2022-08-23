#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
void reverse(int *ptr, int n)
{
    int i=0, reverse=0;
    for (i=0; i<n/2; ++i){
        reverse = *(ptr +i);
        *(ptr +i) = *(ptr +n -i -1);
        *(ptr +n-i-1) = reverse;
    }
}
/// END  <STUDENT ANSWER>
