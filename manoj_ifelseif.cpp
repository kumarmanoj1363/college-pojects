#include <iostream>
using namespace std;
int main()
{
int a,b,c,total=0;
char cat;
cout<<"enter the marks of three subjects=";
cin>>a>>b>>c;
total=a+b+c;
cout<<"whether student belong to sports quota.press Y/N=";
cin>>cat;
if (cat=='y' ||cat=='Y')
{
total=total+100;
}
else
{
total=total+50;
}
cout<<total;
}
