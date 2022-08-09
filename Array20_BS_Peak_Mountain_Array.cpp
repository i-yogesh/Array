#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//Peak element in mountain array
int main()
{
    int arr[] = {2,3,5,7,10,23,20,17,12,8,2};
    int size = sizeof(arr)/sizeof (int);
    int start=0, end= size-1, mid;
    for (; start<end; )
    {
      mid = (start+end)/2;
      if(arr[mid] < arr[mid+1])
      {
        start = mid+1;
      }
      
      else
      {
        end = mid;
      }
      
    }
    cout<<"Maximum Element is "<<arr[end]<<endl;
}