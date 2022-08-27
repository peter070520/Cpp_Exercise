#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
int recursiveSearch(int& n , int m, int arr[], int index)
{
   // Implement function content here
   if (index == n){
      return -1;
   }
   else if (arr[index] == m){
      int i=0, k=0, *ptr=new int[n-1];
      for (i=0; i<n; ++i){
         if (arr[i] != m){
            *(ptr+k) = arr[i];
            ++k;
         }
      }
      for (i=0; i<n-1; ++i){
         arr[i] = ptr[i];
      }
      delete[] ptr;
      return index;
   }
   else {
      return recursiveSearch(n, m, arr, index+1);
   }
}
/// END  <STUDENT ANSWER>