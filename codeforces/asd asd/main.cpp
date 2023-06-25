#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int n,m;
vector<vector<pair<int,int>>>v;
int cost[10001];

void dijk(){
    for(int i=0;i<=n;i++)
        cost[i] = 1e9;

    priority_queue<pair<int,int>>q;

    cost[1]=0;
    q.push({0,1});

    while(!q.empty()){
        int u = q.top().second; int c = - q.top().first;
        q.pop();
        if(cost[u] < c)
            continue;
        for(int i=0;i<v[u].size();++i){
                int cur = v[u][i].first;int cst = v[u][i].second;

                if(cost[cur] > cst + c ){
                    cost[cur] = cst + c ;
                    q.push({- cost[cur],cur});

                }

        }




    }

        for(int i=2;i<=n;i++)
            printf("%d ", cost[i]);

}
int main()
{

   cin>>n>>m;
   v.resize(n+1);
   for(int a,b,c,i=0;i<m;i++){
    cin>>a>>b>>c;
    v[a].push_back({b,c});
    v[b].push_back({a,c});
   }

   dijk();
    return 0;
}
