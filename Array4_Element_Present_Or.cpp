#include <iostream>
using namespace std;

bool search(int arr[],int size, int key)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==key)
    return 1;
  }
  
  return 0;
}

int main()
{
    int arr[]={2,7,-6,9,20};
    int key=90;
    int found = search(arr,5,key);
    if(found==1)
    cout<<"\nPresent"<<endl;
    else
    cout<<"\nAbsent"<<endl;
    /*
      fill_n(arrayName,size,same initiatializing value)
      this is used to give all members a single value
    fill_n(arr,5,10);
    for(int i=0;i<5;i++)
    {
      cout<<arr[i]<<" ";
    }*/
}