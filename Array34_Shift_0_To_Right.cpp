#include <iostream>
using namespace std;

//Shifting 0 to right
void print(int arr[], int n)
{
  for(int i =0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
    int arr[] {0,5,0,8,1,2,0};
    //for assigning elements in serial order taking nonZeroValue which only increases and assigns when value is not zero
    int nonZeroValue=0;
    int n= sizeof(arr)/sizeof(int);
    for(int j=0;j<n;j++)
    {
      if(arr[j]!=0)
      {
        swap(arr[j],arr[nonZeroValue]);
        nonZeroValue++;
      }
    }
    print(arr,n);
}