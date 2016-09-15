#include <iostream>
using namespace std;
int main()
{
int p;
cout<<"Enterthe percentage p=";
cin>>p;
if (p>89)
{
cout<<"A*";
}
else if (p>79)
 {
 cout<<"A";
 }
 else if (p>69)
  {
  cout<<"B*";
  }
  else if (p>59)
    {
    cout<<"B";
    }
    else if (p>49)
     {
     cout<<"C";
     }
     else
      {
     cout<<"Fail";
      }
}
