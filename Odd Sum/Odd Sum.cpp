#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,k=0;
    cin>>t;
    while(t--)
    {
        int a,b,sum=0,i;
        cin>>a>>b;

        for(i=a;i<=b;i++)
        {
            if(i%2==1)
            {
              sum=sum+i;
            }
        }
    k++;
    cout<<"Case "<<k<<": "<<sum<<"\n";
    }
    return 0;
}


