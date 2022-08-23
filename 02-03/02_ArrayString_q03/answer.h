#include <iostream>
#include <cstring>

using namespace std;

// Student may implement another function as need

void process(char str[], char outstr[]) {
    // TODO
    int i, n=strlen(str);
    
    for (i=0; i<n; ++i){ 
        outstr[i] = str[n-i-1];
    }
}
