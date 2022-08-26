#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

	/// BEGIN  <STUDENT ANSWER>
bool checkDuplicate(int* ar, int size)
{
	//Implement content in function  here
	int i;
	for (i=0; i<size; i++){
        if (ar[i] !=ar[i+1]){
            return true;
	    }
	    checkDuplicate(ar, size-1);
    }
}