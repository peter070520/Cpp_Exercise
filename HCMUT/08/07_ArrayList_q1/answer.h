#include <iostream>
#include <algorithm>

using namespace std;

	/// BEGIN  <STUDENT ANSWER>
int buyCar(int* nums, int length, int k) {

	//TODO
	sort(nums, nums+length);
	int i=0, total=0;
	for (i<length; total+nums[i]<=k; ++i){
		total += nums[i];
	}
	// while (total+nums[i]<=k && i<length){
	// 	total+=nums[i];
	// 	++i;
	// }
	return i;
}
