#include <iostream>
#include <vector>

using namespace std;

	/// BEGIN  <STUDENT ANSWER>
int equalSumIndex(vector<int>& nums) {
    //TODO
    int i=0, j=0, k=0, n=sizeof(nums)/sizeof(nums[0]);
    for (i=1; i<n; ++i){
        int leftSum=0, rightSum=0;
        for (j=i-1; j>=0; --j){
            leftSum += nums[j];
        }
        for (k=i+1; k<n; ++k){
            rightSum += nums[k];
        }
        if (leftSum == rightSum){
            return nums[i];   
        }
    }
	return -1;
}