#include <iostream>
#include"bits/stdc++.h"
using namespace std;


    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
             vector<vector<int>>dp (n, vector<int>(2));
        if(n<1) return 0;
        dp[0][0] = - prices[0];
        dp[0][1] = 0;

        for(int i=1;i<n;i++){
                // buy
         dp[i][0] = max (dp[i-1][0], dp[i-1][1] - prices[i] );
        // sell
        dp[i][1]= max (dp[i-1][1], dp[i-1][0] + prices[i] ) ;

            ans = max (ans,  dp[i][0]);

             ans = max (ans,  dp[i][1]);


        }
        return max(dp[n-1][1],dp[n-1][0]);
    }
int main()
{
    vector<int> v = {};


    cout <<maxProfit(v) << endl;
    return 0;
}
