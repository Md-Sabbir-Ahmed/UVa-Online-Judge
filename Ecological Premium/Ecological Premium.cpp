#include<iostream>
using namespace std;
int main()
{
    int n,f,i,result=0;
    while(cin>>n)
    {
        if(n>=20) break;
        cin>>f;
        for(i=1;i<=f;i++)
        {
            if(f<=0 && f>=20) break;
            int a,b,c;
            cin>>a>>b>>c;
            result=result+a*c;

        }
        cout<<result<<endl;
    }


}
