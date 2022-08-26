#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
void printPattern(int n)
{
	/*
	* STUDENT ANSWER
	*/
    int count = n;
    if (n ==0 && n<0){
        if (n == count){
            return n;
        }
        else {
            return n=n+5;
        }
    }
    if (n>1 && n==1){
        return (count=n-5);
    }
    else {
        cout << count << " ";
        return count + printPattern(n - 1);
    }
	
}
/// END  <STUDENT ANSWER>