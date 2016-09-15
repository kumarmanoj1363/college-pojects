#include <iostream>
using namespace std;
int main()
{
int x,a,b;
cout<<"1.add\n"<<"2.substract\n"<<"3.Multiply\n"<<"4.divide\n"<<"5.mode\n";
cin>>x;
cout<<"Enter any two numbers=";
cin>>a>>b;
switch(x)
  {
  case 1:
  cout<<a+b;
  break;
  case 2:
  cout<<a-b;
  break;
  case 3:
  cout<<a*b;
  break;
  case 4:
  cout<<a/b;
  break;
  case 5:
  cout<<a%b;
  break;
  default:
  cout<<"You have entered a wrong choice";
   }

}
