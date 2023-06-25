#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,l;
int dp[101][101][101];
vector<int> a,b,c;
int DP(int i, int j,int k){
        if(i==n||j==m||k==l)return 0;
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        if (a[i]==b[j]&&c[k]==a[i] ) return dp[i][j][k]= 1+ DP(i+1,j+1,k+1);
            else{
                    return dp[i][j][k]= max(DP(i,j,k+1),max(DP(i,j+1,k),DP(i+1,j,k)));

            }

}
int main()
{
memset(dp,-1,sizeof dp);
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    b.resize(m);
    for(int i=0;i<m;i++)cin>>b[i];
    cin>>l;
    c.resize(l);
    for(int i=0;i<l;i++)cin>>c[i];
        cout<<DP(0,0,0);
    return 0;
}
