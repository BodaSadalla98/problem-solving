#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int a[301];
int n;
int dp [301][2*301*301];
int min_with_dp(int index, int sum){
    if (index==n){
        if (sum== 300*300)return 0;
            else
                    return 1e9;
}

    int t1,t2;
    if(dp[index][sum]!=-1)return dp[index][sum];

    t1= 1+ min_with_dp(index+1, sum - a[index]);

    t2= min_with_dp(index+1, sum  + a[index]);
    return dp[index][sum] =  min(t1,t2);


}
void  DP(int index, int sum ){
 if(index==n )return;

                if(min_with_dp(index+1, sum + a[index]) <  min_with_dp(index, sum - a[index])){

           ans.push_back (a[index]);

DP(index+1, sum + a[index]);
}
else
{ans.push_back(-1*a[index]);


DP(index+1, sum - a[index]);
}


}

int main()
{
    cin>>n;
    cin>>a[0];
    for(int i=1;i<n;i++){
    char c;
    int x;
    cin>>c>>x;
    if(c=='-')x*=-1;
    a[i]=x;

}
    memset(dp, -1, sizeof dp);
    int t =min_with_dp(1,a[0]+300*300);
        if (t>300) cout<<"-1";
        else    cout<<t<<endl;
    DP(1,a[0]+300*300);


        for(auto i : ans)cout<<i<<" ";



    return 0;
}
