#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

bool checkEqual(int a[], int b[])
{
  for(int i=0; i<26; i++)
  {
    if(a[i]!=b[i])
    return 0;
  }
  return 1;
}

bool checkInclusion(string s2, string s1)
{
  int count1[26]={0};
  int index=-1;
  for(int i=0; i<s1.length();i++)
  {
    index = s1[i]-'a';
    count1[index]++;
  }
  
  
  //traversing s1 and increasing count of characters
  int i=0;
  int windowSize = s1.length();
  int count2[26]={0};
  while(i<windowSize && i<s2.length())
  {
    index = s2[i] - 'a';
    count2[index]++;
    i++;
  }
  
  if(checkEqual(count1, count2))
 // cout<<checkEqual(count1, count2)<<endl;
  return 1;
  
  
  //for next window
  while(i<s2.length())
  {
    char newChar = s2[i];
    index = newChar - 'a';
    count2[index]++;
    
    //cout<<"index "<<index<<endl;
    //cout<<count2[index]<<endl;
    char oldChar = s2[i-windowSize];
    index = oldChar - 'a';
    count2[index]--;
    
    i++;
    
      if(checkEqual(count1, count2))
  return 1;
    
  }
  //cout<<count1<<" "<<count2;
    return 0;
  
}

int main()
{
    string s2="eidbaooo", s1="ab";
    bool ans = checkInclusion(s2,s1);
    cout<<ans;
}