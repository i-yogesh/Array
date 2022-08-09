#include <iostream>
using namespace std;

//Binary Search
//Binay Search time complexity is O(Log n)
//Linear Search time complexity is O(n)
//(Sorted in Ascending Order)
int main()
{
    int arr[] = {5,10,13,17,21,34,67,99,243,267,678};
    int key=17,mid;
    int size=sizeof(arr)/sizeof(int);
    int start=0, end=size-1;
    
    for( ; start <= end ; )
    {
      
     // mid=(start+end)/2;
     //Optimised Solution
     // if mid is something which is out of int range
      mid = start + (end-start)/2;
      if(arr[mid]==key)
      {
        cout<<key<<" is found at "<<mid+1<<" th position\n";
        return 0;
      }
      
      //Go To Left Side ,key is smaller
      else if(key < arr[mid])
      {
        end = mid-1;
      }
      
      //Go To Right Side ,key is greater
      else if(key > arr[mid])
      {
        start = mid+1;
      }
      
    }
    
      cout<<key<<" is not present\n";
    return 0;
}