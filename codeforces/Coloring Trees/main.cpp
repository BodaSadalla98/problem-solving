#include <iostream>
#include"bits/stdc++.h"
using namespace std;


int n,m,k;
long long dp[101][101][105];
int c[101], p[101][101];
const long long oo= 1e18;
long long calc(int index, int beauty, int last){
    if(index==n){
            if(beauty ==k)
            return 0;

        return oo;
    }

    long long &ret = dp[index][beauty][last];

    if(ret != -1)return ret;


    ret = oo;

    if(!c[index]){

        for(int i=1;i<=m;i++){
            int cur_cost = p[index][i-1];
            if(last == i)
                ret = min (ret,cur_cost+calc(index+1,beauty,i));
            else
                ret = min (ret,cur_cost+calc(index+1,beauty+1,i));



        }

    }
    else{
        if(last == c[index])
       ret = min (ret,calc(index+1, beauty,c[index]));
       else
        ret = min (ret,calc(index+1,beauty+1,c[index]));

    }
    return ret;


}
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>c[i];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;++j)
            cin>>p[i][j];

    memset(dp , -1, sizeof dp);




    long long ans  = calc (0,0,0);


    if(ans ==oo)ans = -1;

    cout<<ans;

    return 0;
}
