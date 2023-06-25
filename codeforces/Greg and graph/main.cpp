#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool vis[501]={0};
long long cost[501][501];
int order[501];
int n;
vector<long long>ans;
long long sum;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    cin>>cost[i][j];
    for(int i=1;i<=n;i++)
        cin>>order[i];
    for(int l=n;l>0;l--){
        vis[order[l]]=1;
        sum=0;

     // here goes belon

     for(int k=1;k<=n;k++)
     for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        if(vis[i]&&vis[k]&&vis[j])
        {
a          cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);

        }



    }



    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
       if(vis[i]&&vis[j])sum+=cost[i][j];
    }

    ans.push_back(sum);


    }

    for(int i=n-1;i>=0;i--)cout<<ans[i]<<' ';

    return 0;
}
