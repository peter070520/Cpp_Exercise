#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>

int strLen(char* str){
	int i, size=sizeof(str)/sizeof(str[0]);
	if (*str =='\0'){
	    return 0;
	}
	else return 1 + strLen(str+1);
}

/// END  <STUDENT ANSWER>