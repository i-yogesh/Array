#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int getLength(char name[])
{
  int count = 0;
  for(int i=0; name[i]!='\0';i++)
  {
    count++;
  }
  return count;
}

int main()
{
    char str[50];
    cout<<"Enter the string\n";
    cin>>str;
    int s=0, e=getLength(str)-1;
    cout<<e<<endl;
    while(s<=e)
    {
      
      if(str[s]!=str[e])
      {
        cout<<"Not Palindrome\n";
        return 0;
      }
      s++;
      e--;
      cout<<"s=="<<s<<" e=="<<e<<endl;
    }
    cout<<"Palindrome\n";
}