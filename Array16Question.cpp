#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int size=7,temp;
    int arr[size]={2,0,1,2,1,0,1};
    for(int i=0;i<size; i++)
    {
      for(int j=i+1;j<size;j++)
      {
        if(arr[i]>arr[j])
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
    
    for(int k=0;k<size;k++)
    {
      cout<<arr[k]<<" ";
    }
}