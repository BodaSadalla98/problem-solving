#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m, cost[200002];
int root[200002];

    int find(int u){
        if(root[u]==u)return u;
        else
            return find (root[u]);

    }

int vis[200002];
int main()
{
    cin.tie(0);cout.tie(0);


    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>cost[i];
    for(int i=0;i<=n;i++)root[i]=i;

   // sort(cost , cost +n);
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;

        a= find(a);
        b= find(b);
        if(a==b)continue;
        if(cost[a]>cost[b])

        root[a]= root[b];
        else
            root[b]= root[a];


    }
    long long  ans=0;
    for(int i=1;i<=n;i++){
        int x= find(i);
        if(vis[x])continue;
        ans+= cost[x];

        vis[x]=1;


    }

    cout<<ans;


    return 0;
}
