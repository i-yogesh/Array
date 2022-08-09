#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    //XOR(^) effects
    /*
    If Two same elements are XOR answer is 0
    Ex- 8^8=0
    if a element is XOR with 0 answer is element
    Ex- 6^0=6
    */
     // Program to find a unique element in an araay means all other elements appear twice but the unique element only once
    int ans=0;
    int arr[]={5,8,9,8,5};
    for(int i=0;i<5;i++)
    {
      ans=ans^arr[i];
    }
    cout<<ans;
}