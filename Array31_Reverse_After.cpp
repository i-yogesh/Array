#include <iostream>
#include<vector>
using namespace std;

//Compiler version g++ 6.3.0
vector<int> reverse(vector<int> &v, int pos)
{
  int start = pos+1, end = v.size()-1;
    
    while(start<=end)
    {
      swap(v[start], v[end]);
      start++;
      end--;
    } 
    return v;
}

void printReverse(vector<int> v)
{
  for(int i=0; i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
}

int main()
{
    vector<int> v = {22,1,8,9,10,2,65};
    int pos = 2;
    vector<int> ans = reverse(v,pos);
    printReverse(ans);
}