#include <iostream>
#include"bits/stdc++.h"

using namespace std;


 const int N = 1e5+1;
int n,m;
int depth[N];
vector<int> g[N];
bool red[N];
int dp[N][17];
int cost[N];
vector <int> cur;
queue<int>q;
void bfs(){


    memset(cost,-1,sizeof cost);

    for(int i=0;i<n;++i){
            if(red[i]){
        cost[i] = 0;
        q.push(i);
    }
    }

    while(!q.empty()){

        int u = q.front();
        q.pop();


        for(int i=0;i<g[u].size();++i){
            int x = g[u][i];
            if(cost[x] != -1  )continue;

            cost[x] =  1+ cost[u];
            q.push(x);

        }

    }









}



void dfs(int u,int parent){

          dp[u][0]=parent;

for(int i=1; i<17; ++i)
		if(dp[u][i-1] != -1)
			dp[u][i]=dp[dp[u][i-1]][i-1];

        for(int i=0;i<g[u].size();++i){
            if(g[u][i] == parent)continue;
            depth[g[u][i]] = depth[u]+1;
            dfs(g[u][i],u);

        }


}

int lca(int u, int v){
	if(depth[u]<depth[v])
		swap(u,v);



	int l=0;
	while((1<<l)<=depth[u])
		++l;
	--l;

	for(int i=l; i>=0; --i)
		if(depth[u]-(1<<i)>=depth[v])
			u=dp[u][i];
	if(u==v)
		return u;
	for(int i=l ;i>=0; --i)
		if(dp[u][i]!=dp[v][i])
			u=dp[u][i],
			v=dp[v][i];
	return dp[u][0];
}





int main()
{


    memset(dp,-1, sizeof dp);

    cin>>n>>m;
    for(int i=0,a,b;i<n-1;++i){
        scanf("%d%d",&a,&b);
        --a;--b;
        g[a].push_back(b);
        g[b].push_back(a);

    }



 depth[0]=0;
    dfs(0,-1);








  //  for(int i=0;i<n;++i)
        //for(int k=0;k<17;++k)
           // printf("dp[%d][%d] ==  %d \n", i,k,dp[i][k]);


    int root = sqrt(m);
    cur.push_back(0);
    red[0]=1;
    for(int i=0,a,b; i<m;++i){
        //cin>>a>>b;
        scanf("%d%d",&a,&b);
        --b;

        if(i%root ==0){

            while(cur.size()){
                red[cur.back()]=1;
                cur.pop_back();
            }
            bfs();

            //red.clear();

        }

        if(a == 1){
           // red.push_back(b);
            cur.push_back(b);
            continue;
            }

        else
        {
            int ans = cost[b];

            for(int j=0;j<cur.size();++j){
                int lc = lca(b, cur[j]);

                ans = min(ans, (depth[b]+depth[cur[j]]- 2*depth[lc] ));

            }


            printf("%d\n", ans);
        }

    }
















    return 0;
}
