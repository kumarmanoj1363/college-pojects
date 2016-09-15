#include <iostream>
using namespace std;
int main()
{
int h,e,m,total;
char cat;
cout<<"please enter marks of thre subjects=";
cin>>h>>e>>m;
total=h+e+m;
cout<<"whether student belongs to sports category.press Y/N=";
cin>>cat;
if (cat=='Y'||cat=='y')
{
total=total+10;
cout<<total;
return 0;
}
}
