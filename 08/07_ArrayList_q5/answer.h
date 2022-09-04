#include <iostream>
#include <vector>

using namespace std;


/// BEGIN  <STUDENT ANSWER>
vector<int> updateArrayPerRange(vector<int>& nums, vector<vector<int>>& operations) {
    // TODO
    int i=0, j=0, num_size=nums.size(), op_size=operations.size();
    for (i=0; i<op_size; ++i){
        if (operations[i][0]>=0 && operations[i][0]<num_size && operations[i][1]>=operations[i][0] && operations[i][1]<num_size){
            for (j=operations[i][0]; j<=operations[i][1]; ++j){
                nums[j]+=operations[i][2];
            }
        }
        else {
            cout << "{" << operations[i][0] << ", " << operations[i][1] << ", " << operations[i][2] << endl;
        }
    }
    return nums;
}
/// END  <STUDENT ANSWER>