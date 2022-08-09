#include <iostream>
using namespace std;

/*
    m- no of students
    n- no of books
    i- book number
    arr[i]= no of pages
    */
      
bool isPosibble(int arr[], int m, int n, int mid)
{
  //stdCount is no of students , this is for knowing which student are we talking about
  //pageSum indicates the sum of no of pages of different books for a particular student
  int pageSum = 0;
  int stdCount = 1;
  for(int i =0; i<n ; i++)
    { 
    //checking if the pageSum(adding next number everytime) is less than mid
    //if true adding that no
    if(pageSum + arr[i] <=mid)
    {
      pageSum+= arr[i];
    }
    else
    {
     // changing the student
      stdCount++;
    //  if student no becomes more than we gave stop
    //  if element is greater than mid leave
      if(stdCount>m || arr[i]>mid)
      {
        return false;
      }
      //starting from the element which is not part of last partition
      pageSum = arr[i];
    }
    
  }
  return true;
}
int allocateBooks(int arr[], int m, int n)
{
  //initialising the range with start and end
  //creating mid, 
  //and setting ans = -1
  
  int start = 0;
  int sum = 0, mid = -1, ans  =0;
  //getting the sum of all the elements
  for(int i=0; i<n; i++)
  {
    sum = sum + arr[i];
  }
  //range final value being set to sum
  int end = sum;
  //getting the middle element
  mid = start + (end-start)/2;
  while(start <= end)
  {
   // calling the function to check if mid is Possible as a solution
    if(isPosibble(arr,m,n,mid))
    {
     // storing the value of mid in ans
      ans = mid;
      end = mid-1;
     // since we want the least of sum of pages, 
     // we are assigning end to mid - 1 to get the pages less than this but who
     //satisfy the condition

     //if it is possible we know everything in right part is possible but since we want the minimum
     //we go to left part (mid-1)
    }
    
    else
    {
      //if the mid is not Possible then nos less than it cannot be possible as well
      
      start = mid + 1;
    }
    mid = start + (end-start)/2;
  }
  
  cout<<ans<<endl;
  
}
int main()
{
    int arr[] ={10,20,30,40};
    int m = 2, n = 4;
    allocateBooks(arr,m,n);
      
}