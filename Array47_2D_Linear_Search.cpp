#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
bool isPresent(int arr[][4], int target, int row, int col)
{
  int i,j;
  for(i=0; i<row; i++)
    {
      for(j=0;j<col;j++)
      {
        if(arr[i][j] == target)
        return 1;
      }
      
    }
    return 0;
}
int main()
{
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;
    //cout<<"Enter the elements of the array\n";
    /*
    for(i=0; i<3; i++)
    {
      for(j=0;j<4;j++)
      {
        cin>>arr[i][j];
      }
      
    }*/
    
    cout<<"Printing\n";
    for(i=0; i<3; i++)
    {
      for(j=0;j<4;j++)
      {
        cout<<arr[i][j]<<"    ";
      }
      cout<<endl;
    }
    
    int target=41;
    bool res = isPresent(arr, target, 3, 4);
    cout<<res; 
}