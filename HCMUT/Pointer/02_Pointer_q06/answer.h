#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int* flatten(int** matrix, int r, int c) {
    // TODO:
    int i, j, count=0;
    int* newArr = new int [r*c];
    for (i=0; i<r; ++i){
        for (j=0; j<c; j++){
            *(newArr + count) = *(*(matrix +i) +j);
            ++count;
        }
    }
    return newArr;
}
/// END  <STUDENT ANSWER>
