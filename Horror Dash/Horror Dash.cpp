#include<iostream>
using namespace std;
int main()
{
    int T,a,i=1;
    cin>>T;
    for(i=0;i<T;i++)
    {
     int m=0,q;
     cin>>q;
    while(q--)
    {
       cin>>a;
       if(a>m)
       {
           m=a;
       }

    }
    cout<<"Case "<<i+1<<": "<<m<<endl;
  }
}
