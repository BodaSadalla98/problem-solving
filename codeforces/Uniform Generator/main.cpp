#include <iostream>
#include<bits/stdc++.h>
int vis[100001];

using namespace std;
int step, mod;
int main()
{
            cin.tie(0);
                ios_base ::sync_with_stdio(false);
   while(cin>>step){
    cin>>mod;
    bool good=1;
        int temp=0;
        memset(vis,0,sizeof vis);
        for(int i=0;i<mod;++i){
                    temp+=step;
                    temp%=mod;

            if(vis[temp]){
                        good=0;
                break;

            }
                 vis[temp]=1;



        }
           cout<<  setw(10)<<step<< setw(10)<<mod<<"    ";
       good ? cout<<"Good Choice" : cout<<"Bad Choice";
            cout<<"\n\n";
   }
    return 0;
}
