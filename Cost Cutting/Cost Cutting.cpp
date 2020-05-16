#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,m=0;
    cin>>t;
    while(t--)
    {
        int a,b,c,k;
        cin>>a>>b>>c;
        if(a<b && b<c || a>b && b>c)
        {
            k=b;
        }
        else if(a>b && c>a || a<b && a>c)
        {
            k=a;
        }
        else if(c>a && b>c || c<a && b<c)
        {
            k=c;
        }
        m=m+1;
        cout<<"Case "<<m<<": "<<k<<"\n";
    }
    return 0;
}


