#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int n,m,a,b;
int cost[1000];
bool vis[1000];
vector<int> v[1000];
void BFS(int u){
queue<int>q;
for(int i=2;i<=n;i++)cost[i]=-1;

cost[u]=0;
q.push(u);
            while(! q.empty()){
    int src = q.front();
    q.pop();
        for(int i=0;i<v[src].size();++i){
                if(cost[v[src][i]]!=-1)continue;

                    cost [v[src][i]] = 1 + cost [src];
                    q.push(v[src][i]);
// this is comment to test bla sha



        }
            }



}


void DFS(int u){

                vis[u]=1;


       // cost[u]= min(cost[u], 1+ cst);
        for(int i=0;i<v[u].size() ;++i){

                int cur = v[u][i];

                 cost[cur] = min(cost[cur], 1+ cost[u]);

                if(!vis[cur]){

                DFS(cur);
                }

        }







}


int main()
{
        cin>>n>>m;
        //v.resize(n);
        for(int i=0;i<m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }


        for(int i=1;i<=n;i++)cost[i]=1e9;
     //   BFS(1);
     cost[1]=0;
        DFS(1);



    cout << cost[4]<< endl;
    return 0;
}
