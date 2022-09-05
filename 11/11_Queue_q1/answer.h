#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

	/// BEGIN  <STUDENT ANSWER>
int sumOfMaxSubarray(vector<int>& nums, int k) {
    // STUDENT ANSWER
    queue<int> queue;
    deque<int> dequeue;
    int i=0, result=0, max=nums[0];
    for (i=0; i<k; ++i){
        queue.push(nums[i]);
        while (!dequeue.empty() && nums[i]>=dequeue.back())
        {
            dequeue.pop_back();
        }
        dequeue.push_back(nums[i]);
        if (nums[i]>max){
            max=nums[i];
        }
    }
    result+=max;
    for (i=k; i<nums.size(); i++){
        queue.push(nums[i]);
        while (!dequeue.empty() && nums[i]>=dequeue.back())
        {
            dequeue.pop_back();
        }
        if (nums[i]>max){
            max=nums[i];
        }
        int temp=queue.front();
        queue.pop();
        if (temp==dequeue.front()){
            dequeue.pop_front();
            max=dequeue.front();
        }
        result+=max;
    }
    return result;
}
