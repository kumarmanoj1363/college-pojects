#include <iostream>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"Enter the value of n...";
cin>>n;
for(i=1;i<=n;i++)
 {
   for(j=n;j>1;j--)
   {
   cout<<" ";
   }
   for(k=1;k<=i;k++)
   {
    cout<<"* ";
    }
    cout<<endl;
   }
}
