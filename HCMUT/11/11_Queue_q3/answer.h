#include <iostream>
#include <vector>
#include <queue>
using namespace std;

	/// BEGIN  <STUDENT ANSWER>
bool exist(int& num, vector<int>& v);

bool isBipartite(vector<vector<int>> graph) {
	vector<int> female;
    vector<int> male;
	queue<int> queue;

	bool isGay=false;
	bool isLes=false;
	int	i=0, queueSize=0, left=0, right=0;

	while (queue.size()!=0)
	{
		queueSize=queue.size();
		for (i=0; i<queueSize/2; ++i){
			left=queue.front();
			queue.pop();
			right=queue.front();
			queue.pop();
			if (exist(left, female) && exist(right, female)){
				isLes=true;
				break;
			}
			if (exist(left, male) && exist(right, male)){
				isGay=true;
				break;
			}
			if (isLes || isGay){
				return false;
			}
			if (exist(left, male) && exist(right, female)){
				continue;
			}
			if (exist(left, male) && !exist(right, female)){
				female.push_back(left);
			}
			if (!exist(left, male) && exist(right, female)){
				male.push_back(left);
			}
			if (!exist(left, male) && !exist(right, female)){
				if (exist(right, male) && exist(left, female)){
					continue;
				}
				if (exist(right, male) && !exist(left, female)){
					female.push_back(left);
				}
				if (!exist(right, male) && exist(left, female)){
					male.push_back(right);
				}
				if (!exist(right, male) && !exist(left, female)){
					queue.push(left);
					queue.push(right);
				}
			}
		}
		if (queue.size()==queueSize && queue.size()!=0){
			male.push_back(queue.front());
			queue.pop();
			female.push_back(queue.front());
			queue.pop();
		}
	}
	return true;
	
}

bool exist(int& num, vector<int>& v){
	int i=0;
	bool result=false;
	for (i=0; i<v.size(); ++i){
		if (num==v[i]){
			result=true;
			break;
		}
	}
	return result;
}