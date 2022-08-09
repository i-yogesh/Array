#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  
    string s;
    cout<<"Enter string\n";
    cin>>s;
    
    int arr[26]={0};
    int i;
    for(i=0;i<s.length();i++)
    {
      char ch=s[i];
      int number=0;
      number = ch-'a';
      arr[number]++;
    }
    
    int maxi=-1, ans;
    for(i=0; i<26; i++)
    {
      if(maxi<arr[i])
      {
        ans=i;
        maxi=arr[i];
      }
    }
    
    char finalAns = ans+'a';
    cout<<finalAns;
}