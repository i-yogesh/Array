#include <iostream>
using namespace std;

int toLowerCase(char ch)
{
  if((ch>='a' && ch<='z') || (ch>=0 && ch<=9))
  return ch;
  
  else
  {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

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
      if(((s>=0 && s<=9) || (s>='a' && s<='z')
      || (s>='A' && s<='Z'))
      && ((e>=0 && e<=9) || (e>='a' && e<='z')
      || (e>='A' && e<='Z')))
      
      {
      
     // if(str[s]!=str[e])
     if(toLowerCase(str[s])!=toLowerCase(str[e]))
      {
        cout<<"Not Palindrome\n";
        return 0;
      }
      s++;
      e--;
      cout<<"s=="<<s<<" e=="<<e<<endl;
      }
    }
    cout<<"Palindrome\n";
}