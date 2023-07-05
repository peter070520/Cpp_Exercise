#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
char* concatStr(char* str1, char* str2) {
    // TODO:
    int string1=0, string2=0, i;
    
    for(i=0; (str1[i] && str2[i]) != '\0'; ++i){
        ++string1;
        ++string2;
    }
    
    char* mergeString = new char[string1+string2];
    for (i=0; str1[i] != '\0'; ++i){
        mergeString[i] =str1[i];
    }
    for (i=string1; str2[i-string1]!= '\0'; ++i){
        mergeString[i] = str2[i-string1];
    }
    
    return mergeString;
    
}
/// END  <STUDENT ANSWER>
