#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//Print the intersecting element of two arrays
int main()
{
    int arr[]={5,8,6,4},arr2[]={7,2,5};
    int element;
    for(int i=0;i<4;i++)
    {
      element=arr[i];
      for(int j=0;j<3;j++)
      {
        if(element==arr2[j])
        {
        cout<<element<<endl;
        arr2[j]=-4;
        break;
        }
      }
    }
    
}