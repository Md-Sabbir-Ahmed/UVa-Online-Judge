#include<iostream>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a.length()==5)
        {
            cout<<"3"<<endl;
        }
        else{
           int one=0;
           if(a[0]=='o')
           {
               one++;
           }
           if(a[1]=='n')
           {
               one++;
           }
           if(a[2]=='e')
           {
               one++;
           }
           if(one>=2)
           {
            cout<<"1"<<endl;
           }
           else
           {
            cout<<"2"<<endl;
           }
        }
    }
}
