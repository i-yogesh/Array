#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void printArray(int arr[],int size)
{
  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
    //i is left side and j is right side
    int arr[]={0,1,1,0,0,1,0,1};
    int size=8,i=0,j=size-1;
    for(;i<j;)
    {
      if(arr[i]==0)
      i++;
      
      if(arr[j]==1)
      j--;
      
      else
      {
      swap(arr[i],arr[j]);
      i++;
      j--;
      }
    }
    printArray(arr,size);
}