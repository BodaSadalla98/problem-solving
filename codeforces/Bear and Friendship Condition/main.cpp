#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//bool adj [150001][150001];
int p[150001];

int sz[150001]; long long edges[150001];
//vector<vector<bool>>v;
int find (int u){
        if(p[u]==u) return u;

        return p[u]= find(p[u]);
}
int main()
{
        int n,m;
        cin>>n>>m;

        for(int i=1; i<=n;i++){p[i]=i;edges[i]=0;sz[i]=1;}

        for(int i=0;i<m; i++){
            int a,b; cin>>a>>b;
           //  adj[a][b]= adj[b][a]=1;



            a= find(a), b= find(b);

            if(a!=b){
                p[b] =a ;

                sz[a] +=sz[b];
                edges[a] += edges[b]+1;


            }
            else
            {
                edges[a]++;

            }





        }

        for(int i=1;i<=n;i++)


            if(p[i]==i ){
                    long long ed = ( (long long)sz[i])*((long long )sz[i]-1)/2;

                    if(ed != edges[i]){
                cout<<"NO";
                return 0;}


            }

        cout<<"YES";
    return 0;
}
