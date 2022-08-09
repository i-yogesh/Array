#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int printArray(int arr[], int n)
{
  for (int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
    int arr[]={5,2,9,10,11};
   // int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    bool swapped=false;
   
   //first loop is for no of rounds
   //rounds are n-1 as it starts from back so the first element will be lowesr so no need to have a round for it
    for(int i=1; i<n; i++)
    {
      //second loop is for checking if next element is bigger and if it is swap them
      //it is <n-1 as last element will be sorted and 2nd last will be swapped by the number before
      for(int j=0; j<n-i; j++)
      {
        if(arr[j]>arr[j+1])
        {
          swapped=true;
          swap(arr[j],arr[j+1]);
        }
        //if current element is smaller than next element then leave it as it is
      }
      //if it is best case i.e already sorted we leave early
      if(swapped=false)
      {
        break;
      }
    }
    printArray(arr,n);
}