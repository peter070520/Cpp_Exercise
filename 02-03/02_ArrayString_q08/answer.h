#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void deleteWord(string s, string s1){
    //TO DO    
    int string=0;
    while (string!=-1){
        string = s.find(s1, string+1);
        if (string != -1){
            s.erase(s.begin() + string, s.begin() + string + s1.length());
        }
    }
    cout << s;
}
