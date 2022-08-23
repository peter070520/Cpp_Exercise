#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    // TODO
    if (row == r)
    {
        matrix[row] = new int[c];
        for (int i = 0; i < c; i++)
        {
            *(*(matrix + row) + i) = *(rowArr + i);
        }
    }
    else if (row < r)
    {
        matrix[r] = new int[c];
        for (int i = 0; i < c; i++)
        {
            *(*(matrix + r) + i) = *(rowArr + i);
        }
        for (int i = r; i > row; i--)
        {
            for (int j = 0; j < c; j++)
            {
                int temp;
                int rowbefore = i - 1;
                temp = *(*(matrix + rowbefore) + j);
                *(*(matrix + rowbefore) + j) = *(*(matrix + i) + j);
                *(*(matrix + i) + j) = temp;
            }
        }
    }
}
/// END  <STUDENT ANSWER>
