#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr)
{
  for(int k: arr)
  {
    cout<<k<<" ";
  }
}

void SelectionSort(vector<int> &arr)
{
  int minIndex = -1;
  //We take the parts in array to be sorted together so if it's the second last element
  // no need to go to last element as it will be the highest afterall
  for(int i=0; i<arr.size()-1; i++)
  {
    //always setting the minIndex same as iteration count i.e i
    //to start from sorted position
    minIndex = i;
    //starting from one position next to i
    for (int j=i+1; j<arr.size() ; j++)
    {
      if(arr[j] < arr[minIndex])
      minIndex=j;
    }
    swap(arr[minIndex], arr[i]);
  }
}
int main()
{
  vector<int> arr = {9,5,1,8,20,13,6,88,2000,1000}; 
  cout<<arr.size()<<endl;
  SelectionSort(arr);
  printArray(arr);
}