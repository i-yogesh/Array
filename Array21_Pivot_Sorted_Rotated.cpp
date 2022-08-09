#include <iostream>
using namespace std;

//Pivot element - smallest value in an array
//Search Pivot Element in a Sorted Rotated Array

int main()
{
    int arr[] = {12,28,34,56,78,1,2,3,4,5,8,9,11};
    //int arr[]={7,9,1,2,3};
    int size = sizeof(arr)/sizeof(int);
    
    int start = 0, end = size-1, mid;
    while(start<end)
    {
      mid = start + (end-start)/2;
      if(arr[mid] >= arr[0])
      {
        start = mid+1;
      }
      
      else
      {
        end = mid;
      }
      
    }
    cout<<"Pivot element is "<<arr[end]<<" and is at "<<end+1<<endl;
}