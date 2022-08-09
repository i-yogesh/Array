#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10,sum=9;
    for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;j++)
      {
        for(int k=j+1;k<size;k++)
        {
          if(arr[i]+arr[j]+arr[k]==sum)
          cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"="<<sum<<endl;
         // cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<sum<endl;
        }
      }
    }
}