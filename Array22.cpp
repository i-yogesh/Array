#include <iostream>
using namespace std;

int Pivot(int arr[], int size)
{
  int start = 0, end = size-1, mid;
  
  while(start<end)
  {
    mid = start + (end-start)/2;
    if(arr[mid] > arr[0])
    {
      start = mid + 1 ;
    }
    else
    {
      end = mid - 1;
    }
  }
  return end;
}

int BinarySearch(int arr[],int start,int end,int key)
{
  int mid;
  
  while(start<=end)
  {
    mid = start + (end-start)/2;
    if(key == arr[mid])
    {
      return mid;
    }
    else if(key < arr[mid])
    {
      end = mid-1;
    }
    
    else
    {
      //Right
      start = mid + 1;
    }
   // return mid;
  }
  
}

int main()
{
    int arr[]={1,3,6,9,14,17};
    int size = sizeof(arr)/sizeof (int);
    int pivot = Pivot(arr,size);
    cout<<pivot<<endl;
    int ans, key = 1;
    if(key>=arr[pivot] && key<=arr[size-1])
    {
      //Right Side
      ans = BinarySearch(arr,pivot,size-1,key);
    }
    else
    {
      //Left Side
      ans = BinarySearch(arr,0,pivot-1,key);
    }
    
    cout<<key<<" is at "<<ans<<" position\n";
}