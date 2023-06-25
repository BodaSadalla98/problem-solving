#include <iostream>
#include<bits/stdc++.h>

using namespace std;
  int n,m;int ans= 1e9;
set<pair<int,int>>s;
  bool vis[100001];
  int cost[100001];
int bfs(int node){
            deque<int>q;
            	memset(vis,0,sizeof(vis));
            	for(int i=1;i<=n;i++)cost[i]=1e9;
            	vis[node]=1;
            	q.push_back(node);
            	int many=0;
            	int localmax=0;
            	cost[node] = 0;
            	while(!q.empty() || many != n){
                        many++;


                        int cur = q.front();

                        q.pop_front();
                    for(int i=1;i<=n;i++){
                        if(vis[i])continue;
                            vis[i] =1;

                            if(s.find({cur,i}) != s.end())
                               {
                                   localmax++;
                                   cost[i] = min(cost[])
                                   q.push_back(i);

                               }
                               else
                                q.push_front(i);


                    }



            	}
            	return localmax;


}

int main()
{

    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        s.insert({a,b});
        s.insert({b,a});


    }
    for(auto i=1;i<=n;i++ )ans = max (bfs(i),ans);
    cout << ans << endl;
    return 0;
}
