#include <iostream>
#include <vector>

using namespace std;

	/// BEGIN  <STUDENT ANSWER>
bool consecutiveOnes(vector<int>& nums) {
    //Implement content in function  here    
    int i=0, meet=0;
    if(nums.size()==0){
        return true;
    }
    
    for(i=1; i<nums.size(); ++i){
        if (nums[i]==1 && meet==0){
            meet=1;
        }
        else if (nums[i]==1 && meet==1 && nums[i-1]!=1){
            return false;
        }
    }
    return true;
}

	



