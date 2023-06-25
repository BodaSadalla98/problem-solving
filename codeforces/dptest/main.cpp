#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[10000001];
int n;
vector<int> v;
int DP(int num){

        if(num<1)return 1e9;
        else if (num==1) return dp [num] = 0;
            if(dp[num]!= -1)return dp[num];
        int x=1e9;int y=1e9;int z= 1e9;
        if(num%3==0)
       x = 1+ DP(num/3);
        if(num%2==0)
        y =1+ DP(num/2);

        z = 1+ DP(num-1);


        x= min(x,y);
        x= min(x,z);

        return dp[num] = x;


}

void getpermititons (int num){
                if(num>n) return ;

       if (dp[num] ==1+dp[num*3])
        {


                   v.push_back(num*3);
                    getpermititons(num *3);

            }

        else if (dp[num]  == 1+ dp[num*2]){
                v.push_back(num*2);
                    getpermititons(num *2);
        }
       else if(dp[num]   ==1+  dp[num+1]){
                v.push_back(num+1);
                getpermititons(num +1);
            }

}
int main()
{
      memset(dp, -1 ,sizeof dp );
    cin>>n;
    int  ans = DP(n);
    cout<<ans<<endl;
  v.push_back(1);
        getpermititons(1);
v.resize(ans);

    for(int i=0; i<v.size();i++)cout<<v[i]<<' ' ;

    return 0;
}
