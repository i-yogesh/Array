#include <iostream>
using namespace std;

int check (int arr[], int n)
{
  //There should be 1 or 0 pair for array to be sorted
  //as only one element can be greater than previous one so as to signify it is sorted
  int count=0;
  for(int i=1; i<n; i++)
  {
    //comparing two simultaneous elements
    if(arr[i-1]>arr[i])
    {
      count++;
    }
    
    //as previous loop starts from 1 , 1 element is left it is checked here
    if(arr[n-1]>arr[i])
    count++;
    
  }
  
  //return true if count is 0 or 1
  //return false if count is 2 or more
  return count<=1;
}

int main()
{
    int arr[] = {3,4,5,1,2};
    int isRight = check(arr,4);
    if(isRight)
    printf("It is sorted and rotated\n");
    else
    printf("It is not sorted and rotated\n");
    
}