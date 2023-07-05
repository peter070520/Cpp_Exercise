#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <list>
using namespace std;

/// BEGIN  <STUDENT ANSWER>
string removeDuplicates(string s)
{
    /*TODO*/
    stack<char> st;
    char ch;
    int i = 0, n = s.length();
    for (i=0; i<n; ++i)
    {
        if (!st.empty())
        {
            ch = st.top();
            if (ch == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    int length = st.size();
    char *chTemp = new char[length + 1];
    for (i=0; i<length; i++)
    {
        chTemp[length-i-1] = st.top();
        st.pop();
    }
    chTemp[length] = '\0';
    string result = chTemp;
    delete[] chTemp;
    return result;
}