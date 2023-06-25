#include <iostream>
#include<bits/stdc++.h>
using namespace std;

..accumulate

int n,a,b;
vector<int > arr[100001];
int sz[10001];
long long ans=0;

void  dfs (int cur ,int parent){

    sz[cur]=1;
    for(int i=0;i<arr[cur].size();i++){

        int src=arr[cur][i];
        if(src==parent)continue;
        dfs(src,cur);
        sz[cur]+=sz[src];




    }

        if(cur!=1)ans+=sz[cur]*(n-sz[cur]);








}





int main()
{
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);

    }
    dfs(1,0);
    cout<<ans;
    return 0;
}
