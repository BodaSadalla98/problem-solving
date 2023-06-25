#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<pair <int,int> > > g;
int n,m,k,cost[201];


void dijk(){
  priority_queue<pair<int,int>> q;
    for(int i=0;i<n;i++)
        cost[i]=1e9;

    q.push(make_pair(0,0));
    cost[0]=0;
    int counter=0   ;

    while(!q.empty()){
       int u=q.top().second,cst=-q.top().first;
       q.pop();
       if(cost[u]<cst)continue;

       if(counter++==k){
        cout<<u<<endl;
        return;

       }
       for(int i=0;i<g[u].size();i++){
        int d=g[u][i].first,c=g[u][i].second;
        // back here to make min function
        if(cst+c<cost[d]){
            cost[d]=cst+c;
            q.push(make_pair(-cost[d],d));
        }

       }





    }
















}













int main()
{
cin >>n;
while(n){
    cin>>m;
    g.clear();
    g.resize(n);
    for(int a,b,c,i=0;i<m;i++){
        cin>>a>>b>>c;
        g[a].push_back(make_pair(b,c));
        g[b].push_back(make_pair(a,c));

    }
    cin>>k;
    dijk();



    cin>>n;
}
    return 0;
}
