#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

   int n,temp;
   cin>>n;
bool cool;
   for(int i=0;i<n;i++){
        cool=0;
    cin>>temp;

   int temp2=temp;
   while(temp2>0){
        if(temp2>7){
    if((temp2-7)%3==0){
        cool=1;
        break;

    }
    }
    temp2-=3;
   }
    int m=temp%7;
    if(m%3==0||temp%7==0||temp%3==0||cool){
        cout<<"YES";
    }
    else
        cout<<"NO";
    cout<<endl;


   }

    return 0;
}
