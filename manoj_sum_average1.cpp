#include <iostream>
using namespace std;
int main()
{
const int SIZE=6;
double sales [SIZE];
cout<<"Enter any five numbers. ";
for(int i=0;i<SIZE;i++)
cin>>sales[i];
double total=0;
for(int j=0;j<SIZE;j++)
total+=sales[j];
{
cout<<total<<endl;
}
double average =total/SIZE;
cout<<"AVERAGE="<<average<<endl;
return 0;
}
