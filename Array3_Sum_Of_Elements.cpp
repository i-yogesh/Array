#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int arr[5];
    int size,sum=0;
    cout<<"Enter the size\n";
    cin>>size;
    cout<<"Enter the elements\n";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    
    for(int i=0;i<size;i++)
    sum=sum+arr[i];
    
    cout<<"Sum is "<<sum;
}