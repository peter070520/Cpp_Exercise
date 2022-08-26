#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (q==0){
        return p;
    }
    return gcdRecursion(q, p%q);

    // END YOUR EMPLEMENTATION [1]
}
int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    int result = min(p,q);
    while (result >0){
        if (p%result ==0 && q%result ==0){
            break;
        }
        result--;
    }
    return result;
    // END YOUR EMPLEMENTATION [2]
}
/// END  <STUDENT ANSWER>