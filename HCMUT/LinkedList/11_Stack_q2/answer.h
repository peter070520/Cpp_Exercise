#include <iostream>
#include <stack>
#include <vector>

using namespace std;

	/// BEGIN  <STUDENT ANSWER>


vector<int> nextGreater(vector<int>& arr){
    vector<int> result(arr);
	int i=0, j=0;
	for (i=0; i<arr.size(); ++i){
		bool exist=false;
		for (j=i+1; j<arr.size(); ++j){
			if (arr[j]>arr[i]){
				result[i]=arr[j];
				exist=true;
				break;
			}
		}
		if (!exist) result[i] = -1;
	}
	return result;
}