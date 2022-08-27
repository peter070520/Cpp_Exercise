#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
void printPattern(int n)
{
	/*
	* STUDENT ANSWER
	*/
    int count = n;
    if (n>0){
        cout << n << " ";
        printPattern(n - 5);
    }
	cout << n << " ";
	remove_spaces(n);
	// (string) n.earse(remove(n.begin(), n.end(), ' '), n.end());
}
string remove_spaces(const string &s)
{
  int last = s.size() - 1;
  while (last >= 0 && s[last] == ' ')
    --last;
  return s.substr(0, last + 1);
}
/// END  <STUDENT ANSWER>