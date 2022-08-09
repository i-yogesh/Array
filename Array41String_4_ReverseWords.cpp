#include <iostream>
#include<string>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s;
    string save="";
    string space = " ";
    cout<<"Enter the string\n";
    getline(cin,s);
    int i, temp,j=0,st,e;
    for(i=0; i<s.length() ; i++)
    {
      if(s[i]!=' ')
      {
        save = save+s[i];
      }
      
      else
      {
        while(st<e)
        {
        st=0;
        e=save.length()-1;
        swap(save[st], save[e]);
        st++;
        e--;
        }
      }
      cout<<save;
    }
    /*
    for(i=0;i<s.length();i++)
    {
      cout<<s[i];
    }*/
}