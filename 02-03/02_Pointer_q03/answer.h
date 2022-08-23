#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
void reverse(int *ptr, int n)
{
    int i=0, reverse=0, j=n-1;
    while (i<j){
        reverse = *(ptr+i);
        *(ptr+i) = *(ptr+j);
        *(ptr+j) = reverse;
        ++i;
        --j;
    }
}
/// END  <STUDENT ANSWER>
