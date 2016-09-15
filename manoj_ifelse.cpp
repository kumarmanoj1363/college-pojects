#include <iostream>
using namespace std;
int main()
{
int H,E,M,TOTAL;
char cat;
cout<<"please enter the marks of three subjects";
cin>>H>>E>>M;
TOTAL=H+E+M;
cout<<"whether student belong to sports category,press Y/N--";
cin>>cat;
if (cat=='Y')
{TOTAL=TOTAL+30;
cout<<TOTAL;"/n";
}
{cout<<TOTAL;
return 0;
}
}
