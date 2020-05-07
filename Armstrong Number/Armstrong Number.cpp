#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
     int input;
     cin>>input;

   while(input--){

     long long num,temp,r;
     cin>>num;
     temp=num;
     int n=0;

     while(num!=0)
     {
         num=num/10;
         n++;

     }
     num=temp;
     while(num!=0)
     {
         r=num%10;
         num=num/10;
         temp=temp-(pow(r,n));
     }
     if(temp==0)
     {
         cout<<"Armstrong"<<endl;
     }
     else
     {
         cout<<"Not Armstrong"<<endl;
     }

   }
 }
