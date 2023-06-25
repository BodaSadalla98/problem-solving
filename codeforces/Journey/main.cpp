#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int depth[100002];
double prob[100002];

vector<vector<int>> v;


void dfs(int node, int parent){
        int children = v[node].size() ;
        bool hasKids =children -1 ;

        for(int i=0; i<children;i++){
            int u = v[node][i];

            if (u== parent)continue;

                if(hasKids)prob[u] = prob[node] / (double)(children-1);


                depth[u]= depth[node]+1;
                dfs(u,node);

        }
        if(hasKids)prob[node]=0;





}
int main()
{
    int n;cin>>n;
        v.resize(n);
        v[0].push_back(-1);

    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        --a,--b;


        v[a].push_back(b);
        v[b].push_back(a);

    }
    prob[0]=1;
    depth[0]=0;

    dfs(0,-1);
   double ans=0;
    for(int i=0;i<n;i++)

    ans += (depth[i] * prob[i]);
    cout.precision(15);

    cout << ans << endl;
    return 0;
}
