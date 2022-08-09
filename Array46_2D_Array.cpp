#include <iostream>
using namespace std;

int main()
{
    //In 2D array first [] represents rows,
    // 2nd [] represents columns
    //Elements are arranged row wise
    //normally elements equal to column will be printed like col = 5 means 5 elements in 1st column
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int arr2[4][5] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};
    int arr3[3][5];
    int i, j;
    // i=rows
    // j=columns
    //taking input row wise
/*
    cout<<"Enter the elements \n";
    for(i=0; i<3; i++)
    {
      for(j=0; j<5; j++)
      {
        cin>>arr3[i][j];
      }
    }*/
    
    //Printing row wise
    /*
    for(i=0; i<3; i++)
    {
      for(j=0; j<5; j++)
      {
        cout<<arr3[i][j]<<" ";
      }
      cout<<endl;
    }*/
    
    //taking input column wise
    for(j=0; j<4; j++)
    {
      for(i=0; i<3; i++)
      {
        cin>>arr[i][j];
      }
      
    }
    
    
    for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
}