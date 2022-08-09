#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int n, int mid)
{
  int lastPosition = stalls[0];
  int cowsCount=1;
  
  for(int i=0; i<n; i++)
  {
    if(stalls[i]-lastPosition>=mid)
    {
      cowsCount++;  
      if(cowsCount==k)
      {
        return true;
      }
     // lastPosition = stalls[i];
    }
    
  }
  return false;
}

int Aggressive(vector<int> &stalls,int k,int n)
{
  
  sort(stalls.begin(), stalls.end());
  
  
  int start = 0;
  int end = 0, maxi = 0, mid, ans;
  for(int i=0; i<n; i++)
  {
    maxi = max(maxi,stalls[i]);
  }
  end = maxi;
  while(start<=end)
  {
    mid = start + (end-start)/2;
    if(isPossible(stalls,k,n,mid))
    {
      ans = mid;
      start = mid+1;
    }
    else
    {
      end = mid-1;
    }
  }
  cout<<endl<<ans<<endl;
}

int main()
{
    //int stalls[] ={2,4,6,3,1};
    vector<int> stalls = {2,4,6,3,1};
    int k=2, n=5;
    Aggressive(stalls,k,n);
}