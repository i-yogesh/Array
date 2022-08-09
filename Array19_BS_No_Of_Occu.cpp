#include <iostream>
using namespace std;

//Binary Search
//No of Occurrences = (last-first)+1
int FirstOccu(int arr[], int size, int key)
{
  int start=0, end=size-1, mid, ans;
  
  for(int i=0; i<size; i++)
  {
    mid=(start+end)/2;
    if(key==arr[mid])
    {
      ans=mid;
      end=mid-1;
    }
    
    else if(key < arr[mid])
    {
      end=mid-1;
    }
    
    else
    {
      start=mid+1;
    }
    
  }
  return ans;
}

int LastOccu(int arr[], int size, int key)
{
  int start=0, end=size-1, mid, ans;
  
  for(int i=0; i<size; i++)
  {
    mid=(start+end)/2;
    if(key==arr[mid])
    {
      ans=mid;
      start=mid+1;
    }
    
    else if(key < arr[mid])
    {
      end=mid-1;
    }
    
    else
    {
      start=mid+1;
    }
    
  }
  return ans;
}

int Calculate(int arr[], int size, int key)
{
  int first = FirstOccu(arr, size, key);
  int last = LastOccu(arr, size, key);
  int occu = (last - first) + 1;
  cout<<key<<" occured "<<occu<<" times"<<endl;
}

int main()
{
    int arr[]= {3,5,7,7,7,7,8,10,23};
    int key = 7;
    int size = sizeof(arr)/sizeof(int);
    Calculate(arr, size, key);
}