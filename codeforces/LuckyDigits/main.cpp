#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sa=0;
    int  sb=0;
string s;cin>>s;
   int a[3];
   int b[3];
   int t=0;
  for(int i=0;i<3;i++){
        a[i]=(s[i]-48);
        sa+=a[i];

  }

        int ii=0;


  for(int i=3;i<6;i++){
        b[ii]=(s[i]-48);
        sb+=b[ii++];

  }


   if(sa>sb){
        sort(b,b+3);
   sort(a,a+3,greater<int>());

     int avg=sa-sb;
        for(int i =0;i<3;i++){
           if(!avg)break;

           int pos=9-b[i];
           if(avg<=a[i]){
            t++;
            avg=0;


           }
            else if(avg<pos){
            b[i]+=avg;
            avg=0;
            t++;

           }
           else
           {
               b[i]+=pos;
               avg-=pos;
               t++;

           }


             if(!avg)break;
        }

   }

   else if(sb>sa)
   {
       sort(a,a+3);
   sort(b,b+3,greater<int>());
        int avg=sb-sa;
        for(int i =0;i<3;i++){
           if(!avg)break;
           int pos=9-a[i];
           if(avg<=a[i]){
            t++;
            avg=0;


           }
           else if(avg<pos){
            a[i]+=avg;
            avg=0;
            t++;
           }
           else
           {
               a[i]+=pos;
               avg-=pos;
               t++;
        }


             if(!avg)break;
        }

   }




    cout<<t;




    return 0;
}
