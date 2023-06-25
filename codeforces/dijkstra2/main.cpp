#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<pair<int,int>>> v;
stack<int>ans;

  long long cost[100001];
   int par[100001];
  int n,m;

  void dijk(){
  priority_queue<pair<long long ,int>> q;

	for(int i=0; i<n; ++i)
		cost[i]=1e9;
  cost[0]=0;
  q.push(make_pair(0,0));
  while(!q.empty()){
    int u=q.top().second;
    long long cst=-q.top().first;
    q.pop();
    if(cst>cost[u])continue;

    for(int i=0;i<v[u].size();i++){
        int d=v[u][i].first;
        int c=v[u][i].second;
        if(cost[d]>(cst+c)){
            cost[d]=cst+c;
            q.push(make_pair(-cost[d],d));
            par[d]=u;

     }

    }

  }






  }
int main()
{

  cin>>n>>m;
  v.resize(n);

  for(int a,b,c, i=0;i<m;i++)
  {
      scanf("%d%d%d",&a,&b,&c);
      a--;b--;
      v[a].push_back(make_pair(b,c));
      v[b].push_back(make_pair(a,c));
  }
  memset(par,-1,sizeof par);

  dijk();



  int pa=n-1;
  while(pa){
    ans.push(par[pa]);
    pa=par[pa];


  }
  if(par[n-1]==-1){cout<<-1;return 0;}
  while(!ans.empty()){
		cout << ans.top()+1 << " ";
		ans.pop();


  }
  cout<<n;


    return 0;

}
