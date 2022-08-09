#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s="daabcbaabcbc", part = "abc";
    while(s.length()!=0 && s.find(part)<s.length())
    {
      s.erase(s.find(part), part.length());
      cout<<s.length()<<endl;
    }
    
    cout<<s;
}