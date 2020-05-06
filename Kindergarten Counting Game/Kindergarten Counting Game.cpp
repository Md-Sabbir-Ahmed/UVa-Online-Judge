#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,w=0,length;
    string  str ;
    while(getline(cin,str))
    {
       int length=str.size();
   for(i=0;i<length;i++)
   {
       if (str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
       {
               w++;
            for(;((str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'))&& (i<length) ; i++){}
       }
   }
   cout << w << endl;
   w=0;
}
  return 0 ;
}


