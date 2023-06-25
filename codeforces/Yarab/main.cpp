#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long  dp[100000001];
long long  n;
vector<int> v;
int  DP(int num){
        dp[1]=0;
            dp[0]=0;
        for(int i=2;i<=num;i++){
            int x = 1+dp[i-1];
                int y=1e9;int z=1e9;
            if(i%3==0)
                y = 1+ dp[i/3];
            if(i%2==0)
             z = 1+ dp[i/2];

            dp[i]=min (x,min(y,z));

}
    return dp[num];

}

void getpermititons (int num){
                for (int i = num; i>0;i--){
                if(i%3==0&&dp[i]-dp[i/3]==1){
                    v.push_back(i);i/=3;i++;}
                 else if(i%2==0&&dp[i]-dp[i/2]==1){
                    v.push_back(i);i/=2;i++;}
                    else    {v.push_back(i);}


}


}
int main()
{
      memset(dp, -1 ,sizeof dp );
    cin>>n;
    int    ans = DP(n);
    cout<<ans<<endl;

      getpermititons(n);

    v.resize(ans+1);
//for(int i =1;i<=n;i++)cout<<dp[i]<<' ';

    for(int i=v.size()-1; i>=0;i--)cout<<v[i]<<' ' ;

    return 0;
}
