#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

	/// BEGIN  <STUDENT ANSWER>
bool isValidParentheses (string s){
    /*TODO*/
    stack<char> stack;
    char ch;
    int i=0, n=s.length();

    for (i=0; i<n; ++i){
        switch (s[i])
        {
        case '(':
            stack.push('(');
            break;

        case ')':
            ch = stack.top();
            stack.pop();
            if (ch!='('){
                return false;
            }
            break;
            
        case '[':
            stack.push('[');
            break;

        case ']':
            ch=stack.top();
            stack.pop();
            if (ch!='['){
                return false;
            }
            break;

        case '{':
            stack.push('{');
            break;

        case '}':
            ch=stack.top();
            stack.pop();
            if (ch!='{'){
                return false;
            }
            break;
        
        default:
            break;
        }
    }
    if (!stack.empty()){
        return false;
    }
    return true;
}
