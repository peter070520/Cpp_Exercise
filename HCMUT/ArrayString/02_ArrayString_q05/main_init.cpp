#include "answer.h"
#include "utils.h"

// const string CHECKED_FILENAME = "answer.h";
// const int NO_IGNORED_LINES = 5;

int main()
{
    // codeCheck(CHECKED_FILENAME, NO_IGNORED_LINES);
    
    // BEGIN  <TEST CODE>    
    int i=0, j=0, n=strlen(str);
    for (i=0; i<n; ++i){
        if ((str[i]>='a' && str[i] <='z') || (str[i] >= 'A' && str[i] <='Z') || str[i] == ' '){
            outstr[j] = str[i];
            ++j;
        } 
    }
    for (i=0; i<j; ++i){
        outstr[i] = tolower(outstr[i]);
    }
    outstr[0] = toupper(str[0]);
    for (i=1; i<j; ++i){
        if (outstr[i] == ' '){
            outstr[i+1] = toupper(outstr[i+1]);
        }
    }
    /// END  <TEST CODE>

    return 0;
}
