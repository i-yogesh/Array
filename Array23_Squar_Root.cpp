#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int squareRoot(int n)
{
    int start = 0, end = n;
  //  long is used because assume if mid or square becomes integers highest no i.e 2^31
    long long int mid = start + (end-start)/2;
     int ans = -1;
     while(start<=end)
     {
     // mid = start + (end-start)/2;
     long long int square = mid*mid;
      if(square==n)
      {
        return mid;
      }
      if(square>n)
      { 
        end = mid-1;
      }
      if(square<n)
      {
        ans = mid;
        start = mid+1;
      }
      mid = start + (end-start)/2;
    }
    return ans;
    
}

double withDecimal(int n, int nop, int tempRes)
{
  //nop- no of points
  double factor =1, ans = tempRes;
  for(int i = 0; i<nop; i++)
  {
   /* factor means 1/10 = 0.1,
                 0.1/10 = 0.01,
                 0.01/10 = 0.001,*/
    factor = factor/10;
    for(double j =tempRes; j*j <= n; j=j+factor)
    {
    //  j changes from 140+0.1 again then 140.1+0.1
      ans = j;
    }
  }
  return ans;
}
int main()
{
  int n = 130;
  int tempRes = squareRoot(n);
  
  double ans = withDecimal(n, 3, tempRes);
  cout<<ans<<endl;
}