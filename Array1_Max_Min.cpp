/*
    int arr[150]={1,2,3};
    int sizeArray=sizeof(arr)/sizeof(int);
    printf("%d",sizeArray);
  
}*/

// Online C compiler to run C program online
#include<iostream>
#include<climits>
using namespace std;
int minArray(int arr[],int size)
{
    int min= INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

int maxArray(int arr[],int size)
{
    int max= INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int main() {
   int size,minE,maxE;
   cout<<"Enter the size of array\n";
   cin>>size;
   int arr[size];
   
   printf("Enter the elements\n");
   for(int i=0; i<size; i++)
   {
       cin>>arr[i];
   }
   
   //maxArray(arr,size);
   minE=minArray(arr,size);
   maxE=maxArray(arr,size);
   cout<<"Minimum Element is "<<minE<<endl;
   cout<<"Maximum Element is "<<maxE;
    return 0;
}