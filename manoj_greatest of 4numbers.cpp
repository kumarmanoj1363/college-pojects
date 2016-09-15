#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"Enter any four numbers=";
cin>>a>>b>>c>>d;
if (a>b)
{
 {
if (a>c)
 {
if (a>d)
  {
   cout<<"A is greatest";
  }
else
   {
    cout<<"D is greatest";
    }
}else
    {if (c>d)
     cout<<"C is greatest";
    }
}
}else
     {
     cout<<"D is greatest";
     }
 }
 else
      {if (b>c)
else
       {if (b>d)
        cout<<"B is greatest";
       }
 else
        {
         cout<<"D is greatest";
        }
 else
         {if (c>d)
         cout<<"C is greatest";
         }
 else
         {
          cout<<"D is greatest";
         }
      }
 return 0;
 }
