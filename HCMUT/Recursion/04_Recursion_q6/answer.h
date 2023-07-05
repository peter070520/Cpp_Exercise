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
    if (n>0){
        cout << n << " ";
        printPattern(n - 5);
    }
	cout << n << " ";
}
/// END  <STUDENT ANSWER>