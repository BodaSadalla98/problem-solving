#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int p[201];


int calc(int cur,int base){
            if(cur == base)return 0;
            return 1 + calc(p[cur],base);



}
int main()
{
int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>p[i];

        }
        for(int i=1;i<=n;i++)
        cout<<1+ calc(p[i],i)<<' ';


        cout<<endl;








        }



        return 0;
}
