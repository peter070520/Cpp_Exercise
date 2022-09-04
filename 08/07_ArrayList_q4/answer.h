#include <iostream>
#include <vector>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int longestSublist(vector<string>& words) {
    // STUDENT ANSWER
    int i=0, maxLength=0, size=words.size();
    for (i=0; i<size; ++i){
        if(words[i].size()>maxLength){
            maxLength=words[i].size();
        }
    }
}
/// END  <STUDENT ANSWER>