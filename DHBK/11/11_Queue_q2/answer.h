#include <iostream>
#include <vector>
#include <queue>
using namespace std;

	/// BEGIN  <STUDENT ANSWER>
bool meet(const int& num, const vector<int>& v);

void bfs(vector<vector<int>> graph, int start) {
    queue<int> queue;
	vector<int> v;
	int i=0, num=0;

	queue.push(start);
	cout << start << " ";
	v.push_back(start);

	while (queue.size()!=0)
	{
		num=queue.front();
		queue.pop();
		vector<int> prePush=graph[num];
		for (i=0; i<prePush.size(); ++i){
			if (!meet(prePush[i], v)){
				queue.push(prePush[i]);
				v.push_back(prePush[i]);
				cout << prePush[i] << " ";
			}
		}
	}
	
}

bool meet(const int& num, const vector<int>& v){
	int i=0;
	for (i=0; i<v.size(); ++i){
		if (v[i]==num){
			return true;
		}
	}
	return false;
}
