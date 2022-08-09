#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void printArray(int arr[], int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}

void alternateArray(int arr[],int size)
{
  for(int i=0;i<size;i+=2)
    {
      if(i+1<size)
      {
        swap(arr[i],arr[i+1]);
      }
    }
    printArray(arr,size);
}
int main()
{
    int odd[5]={1,2,3,4,5};
    int even[6]={5,8,11,14,17,20};
    
    cout<<"Odd\n";
    alternateArray(odd,5);
    cout<<"\nEven\n";
    alternateArray(even,6);
}