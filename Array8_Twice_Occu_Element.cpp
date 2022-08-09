#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//Question has elements from 0 to N-1
//we have to find element with twice occurence as others occur once
int main()
{
    int arr[]{1,2,3,4,2};
    int size=5,ans=0;
    for(int i=0; i<size; i++)
    {
      
      ans=ans^arr[i];
    }
    
    for(int i=0; i<size;i++)
    {
      
      ans=ans^i;
    }
    cout<<ans;
    
}


//Input- 1,2,3,4,5,2
//Output-2