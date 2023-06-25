#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
int dp[101][101];
vector<int> a,b;
int DP(int i, int j){
        if(i==n||j==m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if (a[i]==b[j]) return dp[i][j]= 1+ DP(i+1,j+1);
            else{
                    return dp[i][j]= max(DP(i+1,j),DP(i,j+1));
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
        cout<<DP(0,0);
    return 0;
}
