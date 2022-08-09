#include<iostream>
using namespace std;

//using &a means taking a (main's n) as a reference
//reference is just a different name for the same variable
void update(int &a)
{
    //creating a reference variable i.e int &a
    a++;
}
int main()
{
    int n = 5;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;
	return 0;
}
