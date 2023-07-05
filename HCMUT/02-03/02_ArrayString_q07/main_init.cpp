#include "answer.h"
#include "utils.h"

// const string CHECKED_FILENAME = "answer.h";
// const int NO_IGNORED_LINES = 5;

int main()
{
    // codeCheck(CHECKED_FILENAME, NO_IGNORED_LINES);
    
    // BEGIN  <TEST CODE>
    int index=0, temp=0, string=s1.find(s2, index);
    temp = string;
    cout << temp;
    while(string != string::npos){
        string = s1.find(s2, string+1);
        if (string != -1){
            cout << " " << string;
        }
    }
    /// END  <TEST CODE>

    return 0;
}
