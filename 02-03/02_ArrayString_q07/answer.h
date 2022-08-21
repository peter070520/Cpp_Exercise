#include <iostream>
#include <string>

using namespace std;

void findAllIndex(string s1, string s2){
    // TO DO
    int i, n=s1.length();
    bool flag = false;
    for (i=0; i<n; ++i){
        if(s1.substr(i, n==s2)){
            cout << i << endl;
            flag = true;
        }
    } 
    if (flag == false){
        cout << ""
    }
}