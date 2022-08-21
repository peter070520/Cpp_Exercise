#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void deleteWord(string s, string s1){
    //TO DO
    int i, n = s.length();
    for(char temp : s1){
        s.earse(remove(s.begin(), s.end(), temp), s.end());
    }
    // for(i=0; i<n, i++;){

    // }
}