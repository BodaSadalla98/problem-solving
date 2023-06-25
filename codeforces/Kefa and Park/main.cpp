#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m, ans;
vector<vector<int>> v;
int cats[100001];
int vis[1000];
void DFS(int u, int p){

                            vis[u]=1;

                if(u!=1) {
                         if(cats[u]+ cats[p] <=m && v[u].size()==1)ans++;
                if(cats[u])
            cats[u] += cats[p];

            if (cats[u]>m )return;


                }
        for(int i=0;i<v[u].size();i++){
            if(p != v[u][i] && !vis[v[u][i]])
                DFS(v[u][i],u);


        }








}
int main()
{
    cin>>n>>m;
    v.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>cats[i];

    }
    for(int i=0;i+1<n+1;++i){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
//cerr<<v[1][0] << v[1][1];
    DFS(1,-1);
    cout << ans<< endl;
    return 0;
}
