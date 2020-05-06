#include<iostream>
using namespace std;
int main()
{   int length;
    string str;
    char convert;
    int chr;
    while(cin>>str)
   {  length=str.size();
    for(int i=0;i<length;i++)
        {   chr=str[i];
            convert=chr-7;
            cout<<convert;
        }
        cout<<endl;
    }
}
