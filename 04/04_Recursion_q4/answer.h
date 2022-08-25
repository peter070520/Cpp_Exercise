#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int recursiveSearch(int& n , int m, int arr[], int index)
{
   // Implement function content here
   --n;
   if (n<0){
      return -1;
   }
   if (arr[n] == m){
      return index=n;
   }
   return recursiveSearch(n, m, arr, index);
}
/// END  <STUDENT ANSWER>