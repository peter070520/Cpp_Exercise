#include <iostream>
#include <cstring>

using namespace std;

// Student may implement another function as need

void process(char str[], char outstr[]) {
    // TODO
    int i, n = strlen(str);
    
    for (i=0; i<n; i++){
        if (str[i]>=97 && str[i]<=122){
            outstr[i] = str[i]-32;
        }
        else{
            outstr[i]= str[i];
        }
    }
}
