#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//Array intersection in sorted array
int main()
{
    int arr1[]={5,10,20,25,30,35},
        arr2[]={3,6,13,20,21,30};
    
    int i=0,j=0;
    while(i<6 && j<6)
    {
      if(arr1[i]==arr2[j])
      {
      cout<<arr1[i]<<endl;
      i++;
      j++;
      }
      
      else if(arr1[i]<arr2[j])
      i++;
      
      else
      j++;
    }
}