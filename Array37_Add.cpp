#include <iostream>
#include<vector>
using namespace std;

//Compiler version g++ 6.3.0
vector<int> reverse(vector<int> arr)
{
  int s = 0, e = arr.size()-1;
  while(s<e)
  {
    swap(arr[s++], arr[e--]);
  }
  return arr;
}

void print(vector<int> arr)
{
  for(int i=0; i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
    vector<int> a = {1,3,3,4,2};
    int n=a.size();
    vector<int> b = {6,8,5};
    int m=b.size();
    int carry=0 ;
    vector<int> ans;
    
    int i=n-1, j=m-1;
    while(i>=0 && j>=0)
    {
      int sum = a[i] + b[j]+carry;
      carry = sum/10;
      sum = sum%10;
      ans.push_back(sum);
      i--;
      j--;
    }

    //first case
    while(i>=0)
    {
      int sum = a[i] + carry;
      carry = sum/10;
      sum = sum%10;
      ans.push_back(sum);
      i--;
    }
    
    //second case
    while(j>=0)
    {
      int sum = b[j] + carry;
      carry = sum/10;
      sum = sum%10;
      ans.push_back(sum);
      j--;
    }
    
    //third case
    while(carry!=0)
    {
      int sum = carry;
      carry = sum/10;
      sum = sum%10;
      ans.push_back(sum);
    }
    
    vector<int> arr = reverse(ans);
    print(arr);
}