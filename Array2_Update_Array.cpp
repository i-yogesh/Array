#include <iostream>
using namespace std;

//When we pass an array in function we actually pass the arr[0] position address so as it's address not a copy it's original data will be modified
void update(int arr[], int size)
{
  arr[1]=220;
  cout<<"Inside update function\n";
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\nGoing back to main function\n";
}
int main()
{
    int arr[]={5,8,11};
    update(arr,3);
    for(int i=0;i<3;i++)
  {
    cout<<arr[i]<<" ";
  }
}