#include <iostream>
using namespace std;

int FirstOccu(int arr[],int size, int key)
{
  int start = 0, end = size-1, ans = -1;
  int mid;
  
  while(start<=end)
  {
    mid = start+(end-start)/2;
    
    if(arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    
    //Go To Left Side ,key is smaller
      else if(key < arr[mid])
      {
        end = mid-1;
      }
      
      //Go To Right Side ,key is greater
      else if(key > arr[mid])
      {
        start = mid+1;
      }
  }
  return ans;
}
  
  int LastOccu(int arr[], int size, int key)
  {
    int start = 0, end = size-1, ans= -1;
    int mid;
    
    while(start<=end)
    {
      mid = start + (end-start)/2;
      if(arr[mid] == key)
      {
        ans=mid;
        start = mid+1;
      }
      
      //Go To Right Side ,key is greater
      else if(arr[mid]<key)
      {
        start = mid+1;
      }
      
      //Go To Left Side ,key is smaller
      else
      {
        end = mid-1;
      }
       
    }
   return ans;
  }

int main()
{
    int arr[] = {3,5,7,9,10,11,11,11,12,14,14,17};
    int size = sizeof(arr)/sizeof(int);
    int key = 11;
    cout<<key<<"'s first occurence is at index " << FirstOccu(arr,size,key) << endl;
    cout<<key<<"'s last occurence is at index " << LastOccu(arr,size,key) << endl;
    
    //cout<<"First occurence of "<< key " is at "<<FirstOccu(arr,size,key);
    //cout<<"Last  occurence of "<< key " is at "<<LastOccu(arr,size,key);
}