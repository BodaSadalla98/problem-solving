#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int >ans;
int vis[100002];
priority_queue <int> q;
vector<vector<int>>v;
int n,m;
int main()
{
    cin>>n>>m;
    v.resize(n+1);
    int a,b;
    for(int i=0;i<m;i++){
            cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vis[1]=1;
    q.push(-1);
    while(!q.empty()){
            int u = -1*q.top();
            ans.push_back(u);
                q.pop();
                for(int i=0;i<v[u].size();i++){
                        int x = v[u][i];
                        if(!vis[x]){
                            q.push(-1*x);
                            vis[x]=1;
                        }


                }



    }

           // reverse(ans.begin(),ans.end());
    for(auto i : ans)cout<<i<<' ';


    return 0;
}
