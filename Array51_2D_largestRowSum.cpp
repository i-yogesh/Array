#include<iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int maxElement = INT_MIN;
    int i,j,n, rSum =0, indexLargest;

    // i  = row
    // j  = column
    cout<<"Enter the no of rows and column for a square matrix\n";
    cin>>n;

    cout<<"Enter the elements of matrix\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        rSum = 0; 
        for(j=0; j<n; j++)
        {
            rSum = rSum + arr[i][j];
            if(maxElement<rSum)
            {
            maxElement = rSum;
            indexLargest = i;
            }
        }
    }

    cout<<"Largest Row Sum is "<<maxElement<<" and is at "<<indexLargest<<endl;
    return 0;
}