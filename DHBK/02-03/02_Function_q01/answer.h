#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>

// TODO: Implement calculate factorial function in here


void runTest(int n)
{
    long result;
    // TODO: Call function calculateFactorial in here and assign value to the variable result
    int i, factorial=1;
    if (n !=0)
    for (i=1; i<=n; ++i){
        factorial *= i;
        // factorial = factorial*i;
    }
    factorial = result;
    cout << result << endl;
}
/// END  <STUDENT ANSWER>