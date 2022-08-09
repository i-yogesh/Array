#include <iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> &arr1,int n1,vector<int> &arr2,int n2)
{
  int i=n1-1, j=n2-1, k=arr1.size()-1;
  while(i>=0 && j>=0)
  {
    //comparing the elements side by side and if 1st array element is smaller , copying this value to 3rd array
    if(arr1[i]>arr2[j])
    {
      arr1[k] = arr1[i];
      k--;
      i--;
    }
    else
    {
      //otherwise copying to second array
      arr1[k]=arr2[j];
      k--;
      j--;
    }
  }
  
  //copying the remaining elements that were left after comparing equal no of index
  
  
  while(j>=0)
  {
     arr1[k]=arr2[j];
     k--;
     j--;
  }
  return arr1;
}

void print(vector<int> arr)
{
  cout<<"Final result"<<endl;
  for(int i=0; i<arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
    vector<int> arr1={3,4,0,0,0,0};
    vector<int> arr2={5,6,10,15};
    arr1=merge(arr1,2,arr2,4);
    print(arr1);
}