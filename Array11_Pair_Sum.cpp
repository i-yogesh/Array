#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//Pair sum
int main()
{
    int arr[]={2,6,12,8,10};
    int sum=14,i=0,j;
    for(i=0;i<4;i++)
    {
      for(j=i+1;j<4;j++)
      {
        if(arr[i]+arr[j]==sum)
        cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
      }
    }
}