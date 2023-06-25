#include <iostream>
#include"bits/stdc++.h"
using namespace std;


vector<string> v;

string s;
int mod = 1e9+7;
int dx[4] = {1,-1,0,0};
int dy[4]={0,0,1,-1};
bool vis[7][7];
int ans;
int n;
int dp[1000006];
int calc(int sum){
    if(sum > n)
        return 0;
    if(sum == n)
        return 1;

    int &ret = dp[sum];
    if(ret != -1) return ret;

    ret = 0;

    for(int i=1;i<7;i++ ){


        ret = (ret + calc(sum+i)%mod )%mod;
    }
    return ret;



}
int main()
{
    cin>>n;
    memset(dp, -1 , sizeof dp);

    cout<<calc(0);
    return 0;
}


