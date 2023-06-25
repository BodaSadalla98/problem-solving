#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long  dp[100001];
long long  n;
vector<int> v;
long long  DP(int num){
        if(num>n)return 1e9;
        else if (num==n) return dp [num] = 0;
            if(dp[num]!= -1)return dp[num];
       // long long  x=1e9,y=1e9,z=1e9;

            int x = 1+ DP(num*3);
        int  y =1+ DP(num*2);

     int     z = 1+ DP(num+1);

      //  x= min(x,y,z);
       // x= min(x,z);

        return dp[num] =min(x, min(y,z));



}

void getpermititons (int num){
                if(num<1) return ;

       if (dp[num]+1 ==  dp[num/3]&&num%3==0)
        {


                   v.push_back(num/3);
                    getpermititons(num /3);

            }

        else if (dp[num] +1 ==  dp[num/2]&&num%2==0){
                v.push_back(num/2);
                    getpermititons(num /2);
        }
       else if(dp[num] +1  ==  dp[num-1]){
                v.push_back(num-1);
                getpermititons(num - 1);
            }

}
int main()
{
      memset(dp, -1 ,sizeof dp );
    cin>>n;
    long long   ans = DP(1);
    cout<<ans<<endl;
    v.push_back(n);
    //    getpermititons(n);
    v.push_back(1);
    v.resize(ans+1);
//cout<< "==================================="<< dp[96234]<< dp[32078]<<"        " <<dp[48117]<<endl;
    for(int i=v.size()-1; i>=0;i--)cout<<v[i]<<' ' ;

    return 0;
}
