#include <iostream>
#include<bits/stdc++.h>

using namespace std;

 vector <vector<pair<int , int >>>v;
  int ans;
  bool vis[101];
void dfs(int node, int color){
            if(vis[node])return;

                vis[node]=1;
            for(int i=0; i< v[node].size();i++){

                int next = v[node][i].first;
                int nextcolor = v[node][i].second;



                if(!vis[next] && nextcolor == color)

                dfs(next,nextcolor);



            }









}
int main()
{

    int n,m;cin>>n>>m;
    v.resize(n+1);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
    }

    int q;cin>>q;
    while(q--){
        ans =0;

        memset(vis, 0, sizeof vis);
        int a,b;
        cin>>a>>b;
         for(int i=0; i< v[a].size();i++){
                 int next = v[a][i].first;
                int nextcolor = v[a][i].second;
                    vis[a]=1;
                dfs(next,nextcolor);
                        if(vis[b])ans++;
                   memset(vis, 0, sizeof vis);

            }






        cout<<ans<<endl;
    }

    return 0;
}
