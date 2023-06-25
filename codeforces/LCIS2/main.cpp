#include <iostream>
#include"bits/stdc++.h"

using namespace std;
map<int,int> ls;
int n,m,a[501],b[501];
int dp[501][501], nxt[501][501],last[501];

vector<int>ans;
int calc(int u, int v){
	int &ret=dp[u][v];
	if(u==n+1)return ret=0;
	if(ret!=-1)return ret;
	ret=calc(u+1,v);
	if(a[u]>b[v] && nxt[u][v]!=-1)
		ret=max(ret,1+calc(u+1,nxt[u][v]));
	return ret;
}


void build(int u , int v){
 int  &ret= dp[u][v];
 if(u==n+1)return;

 if(ret==dp[u+1][v]){
    build(u+1,v);
    return;

 }
 else{
    cout<<a[u]<<' ';
    build(u+1,nxt[u][v]);
    return;

 }



}



int main()
{
   //6 1 2 3 4 3 2 4 1 4 3 4
    cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];

        cin>>m;
        for(int i=1;i<=m;i++)
            cin>>b[i];

            memset(nxt, -1,sizeof nxt);
            memset(last, -1,sizeof last);

        for(int i=n;i>0;--i){
            for(int j =m;j>=0;--j){

                     nxt[i][j] = last[i];
               if(a[i] == b[j]){

                    last[i] = j;

               }

            }

        }



/**
        for(int i=1; i<=n; ++i){
		for(int j=0; j<=m; ++j){

            cout<<nxt[i][j]<<' ';
		}
		cout<<endl;
	}
**/

//memset(dp,-1,sizeof dp);
b[0] = -1;
 // cout<<calc(1,0)<<endl;


        for(int i=n;i>0;--i){
            for(int j =m;j>=0;--j){
                    dp[i][j] = max(dp[i][j], dp[i+1][j]);

                    if(nxt[i][j]!= -1  && a[i]> b[j]){
                        dp[i][j] = max(dp[i][j], 1+ dp[i+1][nxt[i][j]]);
                    }

            }

            }
/**
            for(int i=n;i>=0;--i)
            for(int j =m;j>=0;--j)
            cout<<dp[i][j];
**/
            cout<<dp[1][0]<<endl;
          build(1,0);

    return 0;
}
