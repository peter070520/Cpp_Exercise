#include <iostream>
#include <vector>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int longestSublist(vector<string>& words) {
    // STUDENT ANSWER
    int i=0, maxLength=0, currentLength=0, size=words.size();
    char currentLetter='\0';
    for (i=1; i<size; ++i){
        if(!currentLetter || currentLetter!=words[i][0]){
            maxLength=max(maxLength, currentLength);
            currentLetter=words[i][0];
            currentLength=1;
        }
        else {
            currentLength+=1;
        }
    }
    return max(maxLength, currentLength);
}
/// END  <STUDENT ANSWER>