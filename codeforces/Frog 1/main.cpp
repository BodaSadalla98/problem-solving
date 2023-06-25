#include <iostream>
#include<bits/stdc++.h>


using namespace std;
int dp[100001],h[100001];
int ma = 1e9;
int main()
{

    int n,k;cin>>n>>k;
    for(int i=1;i<=n;i++){cin>>h[i];dp[i]= ma;}

    dp[1] = 0;
    for(int i=2;i<=n;i++){
            for(int j=1;j<=k;j++){

                if(i-j >0){
                         int b= dp[i-j] + abs(h[i-j] - h[i]);
                    dp[i] = min (dp[i],b);

                }

            }
           // a = dp[i-1] +  abs(h[i-1] - h[i]);





    }
    cout << dp[n] << endl;
    return 0;
}
