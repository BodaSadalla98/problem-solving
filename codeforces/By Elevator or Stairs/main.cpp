#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int a[200002];
int  b[200002];
int dp[200002][2];


int main()
{
    int n,c;cin>>n>>c;
    a[0]=0;b[0]=c;
    for(int i=1;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)cin>>b[i];

    dp[0][0]=0;
    dp[0][1]= c;

    for(int i=1;i<n;i++){
       int x= dp[i-1][0] + a[i];
        int y = dp[i-1][1] + a[i];
        int z = dp[i-1][1]+b[i];
        int w = dp[i-1][0] + b[i] + c;

        dp[i][0] = min (x,y);
        dp[i][1] = min (z,w);

    }
    for(int i=0;i<n;i++)printf("%d ", min (dp[i][0],dp[i][1] ) );

    return 0;
}
