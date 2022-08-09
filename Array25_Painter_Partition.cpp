#include <iostream>
using namespace std;

//We have to calculate the minimum time needed to 
//complete a particular task of time = sum of arr[i]
//and k painters
bool isPossible(int arr[] ,int k,int n,int mid)
{
  int painterTime=0;
  int painterCount=1;
  for(int i=0; i<n; i++)
  {
    if(painterTime + arr[i] <= mid)
    {
      painterTime += arr[i];
    }
    else
    {
      painterCount++;
      if(painterCount>k || arr[i]>mid)
      {
        return false;
      }
      painterTime = arr[i];
    }
   // painterTime = arr[i];
  }
  return true;
}

int painterPartition(int arr[],int k, int n)
{
  int start =0 , end, mid=0, sum=0;
  int ans = 0;
  for(int i=0; i<n; i++)
  {
    sum = sum + arr[i];
  }
  
  end = sum;
 // cout<<end<<endl;
  while(start<=end)
  {
    mid = start + (end-start)/2;
    if(isPossible(arr,k,n,mid))
    {
      ans = mid;
      end = mid-1;
    }
    else
    {
      start = mid+1;
    }
  }
  cout<<ans<<endl;
}

int main()
{
    int arr[]={5,5,5,5};
    //int arr []={10,20,30,40};
    //no of painter is k
    //4 is the size of the array
    int k=2;
    painterPartition(arr,k,4);
}