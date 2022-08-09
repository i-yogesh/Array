#include <iostream>
using namespace std;


void reverse(int arr[], int size)
{
  int start=0, end = size-1;
  while(start<=end)
  { 
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int arr[]={5,8,2,3,4};
    reverse(arr,5);
    
    int arr2[]={2,7,9,10,5,8};
    reverse(arr2,6);
    
    printArray(arr2,6);
    return 0;
}