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

void reverse(char name[],int n)
{
  int s=0, e=n-1;
  while(s<e)
  {
    swap(name[s++], name[e--]);
  }
  cout<<name<<endl;
}
int main()
{
    char name[20];
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    int length = getLength(name);
    cout<<"Length: "<<length<<endl;
    reverse(name,length);
}