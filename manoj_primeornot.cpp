#include <iostream>
using namespace std;
int main()
{
int i,n,k;
cout<<"please enter a number ";
cin>>n;
for(i=2;i<=n-1;i++)
{
if(n%i==0)
{
k=0;
break;
}
else
k=1;
}
if (k==0)
cout<<"not prime.";
else
cout<<"prime";
}

