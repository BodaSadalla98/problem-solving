#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000 + 10;
const int M = 1000000007;
const double PI = atan(1) * 4;
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
int n, m, x[501], y[501], dp[501][501], nxt[501][501];
map<int,int> ls;
void solve(int u, int v){
	if(u==n+1)return;
	if(dp[u][v]==dp[u+1][v])
		solve(u+1,v);
	else{
		printf("%d ", x[u]);
		solve(u+1,nxt[u][v]);
	}
}
int calc(int u, int v){
	int &ret=dp[u][v];
	if(u==n+1)return ret=0;
	if(ret!=-1)return ret;
	ret=calc(u+1,v);
	if(x[u]>y[v] && nxt[u][v]!=-1)
		ret=max(ret,1+calc(u+1,nxt[u][v]));
	return ret;
}
int main(){

	cin>>n;
	for(int i=0; i<n; ++i)
		scanf("%d",x+i+1);
	cin>>m;
	for(int i=0; i<m; ++i)
		scanf("%d",y+i+1);
	memset(nxt,-1,sizeof(nxt));
	for(int i=m; i>=0; --i){
		for(int j=1; j<=n; ++j)
			if(ls.find(x[j])!=ls.end())
				nxt[j][i]=ls[x[j]];
		ls[y[i]]=i;
	}
	y[0]=-1;

	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){

            cout<<nxt[i][j]<<' ';
		}
		cout<<endl;
	}
	memset(dp,-1,sizeof(dp));
	cout<<calc(1,0)<<endl;
	solve(1,0);
}
