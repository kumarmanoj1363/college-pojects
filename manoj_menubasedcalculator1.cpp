#include <iostream>
using namespace std;
int main()
{
char x;
int a,b;
cout<<"a.add\n"<<"b.substract\n"<<"c.Multiply\n"<<"d.divide\n"<<"e.mode\n";
cin>>x;
cout<<"Enter any two numbers=";
cin>>a>>b;
switch(x)
  {
  case 'a':
  cout<<a+b;
  break;
  case 'b':
  cout<<a-b;
  break;
  case 'c':
  cout<<a*b;
  break;
  case 'd':
  cout<<a/b;
  break;
  case 'e':
  cout<<a%b;
  break;
  default:
  cout<<"You have entered a wrong choice";
   }

}

