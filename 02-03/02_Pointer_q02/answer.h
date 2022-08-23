#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int findMax(int *ptr, int n)
{
    int i, max=0;
    for (i=0; i<n; ++i){
        if (*(ptr +i) >= max) {
            max = *(ptr + i);
        }
    }
    return max;
}
/// END  <STUDENT ANSWER>
