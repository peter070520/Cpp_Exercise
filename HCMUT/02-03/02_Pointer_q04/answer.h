#include <iostream>
#include "util.h"
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
void deleteMatrix(int**& matrix, int r) {
    // TODO:
    int i;
    for (i=0; i<r; ++i){
        delete [] matrix[i];
    }
    delete[] matrix;
    matrix = NULL;
    if (matrix == NULL) {
        cout << "SUCCESSFULLY";
    }

}
/// END  <STUDENT ANSWER>
