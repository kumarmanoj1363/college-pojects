#include <iostream>
using namespace std;
int main()
{
int marks[6];
for(int i=0;i<=6;i++)
{
cout<<"enter the marks of subjects..";
cin>>marks[i];
}
for(int j=0;j<5;j++)
{
cout<<"\n you entered" <<marks [j]<<endl;
}
return 0;
}
