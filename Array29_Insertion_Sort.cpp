#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
  for (int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int arr[]={7,1,2,20,3};
    int n = sizeof(arr)/sizeof(int);
    
    //we are assuming the 0th element to be sorted that's why 
    //starting from 1st index
    for(int i=1; i<n; i++)
    {
      //we are storing the value in temp that needs to be sorted
      int temp=arr[i];
      //we are comparing values from i-1 to 0 , i.e reverse order
      int j=i-1;
      for( ; j>=0; j--)
      {
        if(temp<arr[j])
        {
          //shift
          arr[j+1] = arr[j];
        }
        //already sorted or breaks out when the position was found
        else
        {
          break;
        }
      }
      //arranging the value to be sorted in it's required positions
     //position is the index after loop breaks
      arr[j+1] = temp;
    }
    
    printArray(arr,n);
}