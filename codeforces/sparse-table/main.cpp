#include <iostream>
#include"bits/stdc++.h"
using namespace std;
int dp[100001][20], mn[100001][20];
int main()
{

    int n;cin>>n;
    vector<int>v(n+2);
     memset(dp, -1 , sizeof dp);
     v[n+1]= 1000000;
    for(int i=1;i<=n;++i){

        cin>>v[i];
        dp[i][0] = i+1;
        mn[i][0] = v[i];
    }

    dp[n][0]=-1;
    /*
    for(int i=1;i<=n;++i)
         mn[i][0] = min(v[i],v[i+1]);
*/


    for(int k=1;k<20;++k)
    for(int i=1;i<=n;++i){
        if(dp[i][k-1] != -1){
        dp[i][k] = dp[dp[i][k-1]][k-1];
        mn[i][k]=min(mn[i][k-1], mn[dp[i][k-1]][k-1]);

        }

    }

    int q;cin>>q;
    for(int i=0;i<q;++i){
        int a,b; cin>>a>>b;
        int u = a ;
        b= b-a;
        int m= 100000;
        for(int k=19;k>=0;--k){
            if(b >= (1<<k)){
                m = min(m,dp[u][k]);
                u = dp[u][k];
                b -= (1<<k);

            }

        }
       // m = min(m,dp[u][0]);
        cout<<m<<endl;



    }


    cout << "Hello world!" << endl;
    return 0;
}
