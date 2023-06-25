#include<bits/stdc++.h>

using namespace std;

//bool p[100001]; long long  d[100001];
int main(){
   int t; cin>>t;
   for(int j=1; j<=t; j++){
       long long  ans = 0;
       //memset(p,0,sizeof p);
      // memset(d,-1,sizeof d);
       int n,m,q,temp;
       cin>>n>>m>>q;
       vector<bool> p(n + 1);
       vector<long long > d(n + 1, -1);
       for(int i=0;i<m;i++){cin>>temp;p[temp] = 1;}
       for(int i=0;i<q;i++){
           int r;cin>>r;


           if(d[r] != -1){ans+= d[r];continue;}
           d[r]=0;
           for(int k=r;k<=n;k+=r){
                if(!p[k])d[r]++;


           }

                ans+= d[r];
       }



       printf("Case #%d: %d\n",j,ans);
   }



    return 0;
}
