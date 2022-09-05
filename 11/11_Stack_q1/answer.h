#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

/// BEGIN  <STUDENT ANSWER>
int baseballScore(string ops)
{
	/*TODO*/
	stack<int> stack;
	int i = 0, prev, pprev, result = 0;
	for (char ch : ops)
	{
		switch (ch)
		{
		case '+':
			prev = stack.top();
			stack.pop();
			pprev = stack.top();
			stack.push(prev);
			stack.push(prev + pprev);
			break;
		case 'D':
			prev = stack.top();
			stack.push(2 * prev);
			break;
		case 'C':
			stack.pop();
			break;
		default:
			if (ch >= '0' && ch <= '9')
				stack.push((int)ch - 48);
			break;
		}
	}
	int size = stack.size();
	for (i = 0; i < size; ++i)
	{
		result += stack.top();
		stack.pop();
	}
	return result;
}
