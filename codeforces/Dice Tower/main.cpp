#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool can (long long rem){
            if(rem ==0)return 1;
            if(rem <0)return 0;
            bool a;
                for(int i=1;i<=6;i++){


                      if  ( can (rem- (21-i)))return 1;



                }


            return 0;
}

int main()
{
    int t; cin>>t;
    while(t--){

        bool b = 0;
        long long x;
        cin>>x;
        for(int i = 15; i<=20;i++){
           if( (x - i) %14 ==0   &&(x-i) >=0 ){b=1;break;}
        }

        if(b)cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
