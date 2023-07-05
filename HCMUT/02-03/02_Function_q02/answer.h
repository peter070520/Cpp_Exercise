#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int findMax(int *vals, int numEls) {
    // TODO
    int i, max=0;
    for (i=0; i<numEls; ++i){
        if (vals[i] >= max){
            max = vals[i];
        }
    }
    return max;
}
/// END  <STUDENT ANSWER>