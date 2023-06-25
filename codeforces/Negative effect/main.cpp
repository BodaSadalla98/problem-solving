#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<long long >v;
vector<long long >ans;
int main()
{
   int n, m;
   cin>>n>>m;
   v.resize(n+1);
   v[0]=0;
   for(int i=1;i<=n;++i){
        long long  t;
        cin>>t;
    v[i] = t+ v[i-1];

   }

   if(n==1 ){
    cout<<m;return 0;
   }
   for(int i=1;i<=n;++i){
    long t1,t2,t3;
    t1= v[i-1];
    t2= v[n] - v[i];
    t3= v[n] - (v[i]- v[i-1]) + m;
    t1= max(t1,t2);
    t1= max(t1,t3);
    ans.push_back(t1);

   }

     for(int i=0;i<n;++i)cout<<ans[i]<<' ' ;
    return 0;
}
