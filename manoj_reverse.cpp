#include <iostream>
using namespace std;
int main()
{
int i,n,rev=0;
cout<<"Enter the value of n ";
cin>>n;
while(n!=0)
{
i=n%10;
rev=rev*10+i;
n=n/10;
}
cout<<"reverse of number is "<<rev<<endl;
return 0;
}
