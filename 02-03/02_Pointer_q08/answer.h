#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int** transposeMatrix(int** matrix, int r, int c) {
    // TODO:
    int i, j;
    int** newArr = new int*[c];
    for (i=0; i<c; ++i){
        newArr[i] = new int[r];
    }

    for (i=0; i<c; ++i){
        for(j = 0; j < r; ++j){
            newArr[i][j] = matrix[j][i];
        }
    }
    return newArr;    
}
/// END  <STUDENT ANSWER>
