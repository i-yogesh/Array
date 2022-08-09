#include <iostream>
#include<vector>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    vector<int> arr = {3,5,7,8,9};
    int k=2, n = arr.size();
    //cout<<n<<endl;
    vector<int> temp(arr.size());
    for(int i=0; i<n; i++)
    {
      temp[(i+k)%n] = arr[i];
    }
    
    //copy to original array
    arr = temp;
    
    //printing array
    for(int i=0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
}