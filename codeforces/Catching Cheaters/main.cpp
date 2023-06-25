#include <iostream>
#include"bits/stdc++.h"

using namespace std;
string s1,s2;
int n, m;
int dp[5001][5001];
int calc(int i,int j){
    if (i == n || j== m)
        return 0;

    int &ret = dp[i][j];

    if(ret != -1)return ret;

    ret = 0;

    if(s1[i]==s2[j])
        ret = max(ret, 2+ calc(i+1,j+1));

    ret = max(ret,  calc(i+1,j)-1);
    ret = max(ret,  calc(i,j+1)-1);






    return ret;
    }


int main()
{

    cin>>n>>m;
    cin>>s1>>s2;

    memset(dp,-1,sizeof dp);

     int ans= 0;

  /**

    for(int i=n-1;i>=0;--i)
    for(int j=m-1;j>=0;--j){
        if(s1[i]==s2[j])
            dp[i][j] = max(dp[i][j], 2 + dp[i+1][j+1]);

           dp[i][j] = max(dp[i][j], -1 + dp[i+1][j]);
              dp[i][j] = max(dp[i][j], -1 + dp[i][j+1]);
               dp[i][j] = max(dp[i][j], 0);




    }


**/

    for(int i =0;i<n;++i)
        for(int j=0;j<m;++j)
            ans = max(ans, calc(i,j));
   cout << ans;

    return 0;
}
