#include <iostream>
#include"bits/stdc++.h"
using namespace std;
int n,m;
const int N = 400005;
vector<int> g[N];
int a[N], last[N];
int cnt=0;
long long seg[4*N], c[N], newcolors[N];
map<int,int>mp;
int num (long long n){
    int ans =0;
    while(n){
        ans+=n%2;
        n/=2;
    }

    return ans;
}

void build(int p, int l, int r) {
	if(l == r) {
            int color = c[l];
		seg[p] = (1ll<<color);
		return;
	}
	int mid = (l + r) / 2;
	build(p*2, l, mid);
	build(p*2+1, mid+1, r);
	seg[p] = seg[p*2] | seg[p*2+1];
}


long long  get(int p, int l, int r, int a, int b) {
	if(a <= l && r <= b)
		return seg[p];
	if(r < a || l > b)
		return 0;
	int mid = (l + r) / 2;
	return get(p*2, l, mid, a, b)
		   | get(p*2+1, mid+1, r, a, b);
}

void update(int p, int l, int r, int a, int color){

	if(l  == r) {
		seg[p] = 1ll<<color;
        return;
	}

	int mid = (l+r)/2;
        if(a <= mid )
		update(p*2, l, mid, a, color);
		else
		update(p*2+1, mid+1, r, a, color);
	seg[p] = seg[p*2] | seg[p*2+1];
	}





void dfs(int u,int p){
    for(int i=0;i<g[u].size();++i){
        if(g[u][i]==p)continue;

        a[cnt++] = g[u][i];
        mp[g[u][i]] = cnt-1;
        dfs(g[u][i], u);


    }
    last[u]= cnt-1;

}
int main()
{
    cin>>n>>m;
    for(int i=0,x;i<n;++i){
        scanf("%d",&x);
        c[i] = 1ll<<x;
        }

      for(int i=0,x,y;i<n-1;++i) {
        cin>>x>>y;
        --x,--y;
        g[x].push_back(y);
        g[y].push_back(x);


      }
      a[0]= cnt++;
      mp[0]=0;
      dfs(0,-1);
int root = sqrt(n);
int num_of_buckts = (n+root-1)/root;
vector<long long> bucket(num_of_buckts,0);
vector<bool> vis(num_of_buckts,0);

for(int i=0,x;i<n;++i){

        newcolors[i] = c[a[i]];
        }

for(int i=0;i<n;++i)
{
    bucket[i/root] |= newcolors[i];

}





      //build(1,0,n-1);
   // int ans = count ( get(1,0,n-1,0,n-1));
    for(int i=0;i<m;++i){
        int t;cin>>t;

        if(t == 1 ){
            int v, nc;
            cin>>v>>nc;
            --v;
            for(int k=mp[v]; k<= last[v];++k){
                if(k%root ==0 && k+root-1 <= last[v]){
                    bucket[k/root] = 1ll<<nc;
                    vis[k/root]=1;
                    k+= root-1;

                }
                else{
                    newcolors[k] = 1ll<<nc;
                    if(!vis[k/root])
                        bucket[k/root] ^ newcolors[k];

                    /**
                    bucket[k/root]=0;
                    for(int j=(k/root)*root;j<(k/root)*(root+1);++j){
                    bucket[k/root] |= 1ll<<newcolors[j];
                    }
                    **/

                }
            }
            //update(1,0,n-1,k,nc);


        }
        else
        {
            int v;cin>>v;
            --v;
           // int ans = count (get(1,0,n-1,mp[v], last[v]));
           int ans = 0;
           long long all=0;
           for(int k=mp[v];k<=last[v];++k){
                if( (k%root ==0 && k+root-1 <= last[v] ) || vis[k/root] ){
                    all |= bucket[k/root];
                    k+= root-1;
                }
                else
                    all |= newcolors[k];



           }
           ans = num(all);
            cout<<ans<<endl;
        }



    }


    return 0;
}
