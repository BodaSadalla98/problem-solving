#include <iostream>
#include"bits/stdc++.h"
using namespace std;
bool vis[501];
long long  v[501][501];
int main()
{

        for(int i=1;i<=500;i++)
        for(int j=1;j<=500;j++)
            v[i][j] = 1e9;


    int n;cin>>n;
    long long g[501][501];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>g[i][j];

    vector<int> seq(n);
    for(int i=0;i<n;i++)
        cin>>seq[i];

    reverse(seq.begin(),seq.end());
    vector<long long>ans;
    for(int k=0;k<n;k++){
        int node = seq[k];
        vis[node]=1;
        for(int x=0;x<=k;++x){
                int pre = seq[x];
            v[node][pre] = min (g[node][pre], v[node][pre] );
            v[pre][node] = min(g[pre][node],v[pre][node]);

        }

        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){

                v[i][j] =  min(v[i][node] + v[node][j], v[i][j] );





        }
            long long  cnt = 0;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
                if(vis[i] && vis[j])
                cnt+= v[i][j];
        }

            ans.push_back(cnt);

    }
        reverse(ans.begin(),ans.end());
    for(auto i : ans)cout<<i<<' ' ;
    return 0;
}
