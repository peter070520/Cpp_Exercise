#include <iostream>
#include <cstring>

using namespace std;

// Student may implement another function as need

void process(char str[], char outstr[]) {
    // TODO
    int i, j, n = strlen(str);
    for (j=-1, i=0; i<n, str[i] != '\0'; ++i){
        if ((str[i]>='a' && str[i] <='z') || (str[i] >= 'A' && str[i] <='Z')){
            while (i<n && str[i] != ' '){
                str[++j] = str[i];
            }
            str[i] = (char)(str[i] >='a' && str[i] <= 'z' ?((int)str[i] -32) : (int)str[i]);
        }
    }
    str[j] = '\0';
}