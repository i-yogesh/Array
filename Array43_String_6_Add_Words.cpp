#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int i;
    string str = "That Time I Got Reincarnated As A Slime";
    string temp="";
    for(i=0; i<str.length();i++)
    {
      if(str[i]==' ')
      {
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
      }
      
      else
      temp = temp + str[i];
    }
    cout<<temp;
}