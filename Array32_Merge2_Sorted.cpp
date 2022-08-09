#include <iostream>
using namespace std;

int merge(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3)
{
  int i=0,j=0,k=0;
  while(i<n1 && j<n2)
  {
    //comparing the elements side by side and if 1st array element is smaller , copying this value to 3rd array
    if(arr1[i]<arr2[j])
    {
      arr3[k] = arr1[i];
      k++;
      i++;
    }
    else
    {
      //otherwise copying to second array
      arr3[k]=arr2[j];
      k++;
      j++;
    }
  }
  
  //copying the remaining elements that were left after comparing equal no of index
  while(i<n1)
  {
    arr3[k] = arr1[i];
     k++;
     i++;
  }
  
  while(j<n2)
  {
     arr3[k]=arr2[j];
     k++;
     j++;
  }
}

void print(int arr3[], int n)
{
  cout<<"Final result"<<endl;
  for(int i=0; i<n; i++)
  {
    cout<<arr3[i]<<" ";
  }
}
int main()
{
    int arr1[5]={3,5,7,9,11};
    int arr2[4]={4,6,10,15};
    int arr3[9]={0};
    merge(arr1,5,arr2,4,arr3,9);
    //print(arr3,9);
}