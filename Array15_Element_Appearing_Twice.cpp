#include<iostream>
using namespace std;
int CheckRepeatedDigits(int arr[],int exists[], int size,int value);
int main()
{
    int arr[6] = {1,2,4,1,2,2}, size=6;
    int exists[6] = {0};
    for(int i=0; i<size; i++)
    {
        int no_of_occur = CheckRepeatedDigits(arr,exists,size,arr[i]);
        if(no_of_occur!=0)
        {
            exists[i] = 1;
            cout<<arr[i]<<" repeated "<<no_of_occur<<" times\n";
        }
    }
    return 0;
}
int CheckRepeatedDigits(int arr[],int exists[],int size,int value)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
            if(exists[i]!=0)
            return 0;

            count++;
        }
    }
    if(count==2)
    return count;
}