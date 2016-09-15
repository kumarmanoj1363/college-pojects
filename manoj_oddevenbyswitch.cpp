#include <iostream>
using namespace std;
int main()
{
int n,a;
cin>>n;
a=n%2;
switch(a)
{
   case 0:
    cout<<"The number is even.";
    cout<<"Bye";
break;
    case 1:
     cout<<"The number is odd.";
     cout<<"Welcome.";
break;
default:
     cout<<"You have entered a wrong number.";
}
}
