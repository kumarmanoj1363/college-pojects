#include <iostream>
using namespace std;
int main()
{
int p;
cout<<"Enter the percentage p=";
cin>>p;
if (p<49)
{
cout<<"FAIL";
}
else if (p<59)
 {
 cout<<"c,neds more improvement";
 }
  else if (p<69)
   {
   cout<<"B,needs a little improvement";
   }
   else if (p<79)
    {
    cout<<"B*,not bad but can do better";
    }
   else if (p<89)
     {
   cout<<"A,good can expect for better";
     }
   else
      {
   cout<<"A*,exceptionally good";
      }
}
