#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int oo = 1e5;
int dp[101][3];
int a[100];
int n;




int main()
{


    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];dp[i][0]= dp[i][1]= dp[i][2] = oo; }

    dp[0][0]=1;
    if(a[0]== 1 || a[0] == 3) dp[0][1]=0;
    if(a[0] ==3 || a[0]==2) dp[0][2] = 0;


    for(int i=1;i<n;i++){

            dp[i][0] =  1+ min (dp[i-1][0], min(dp[i-1][1],dp[i-1][2]));

             if(a[i]== 1 || a[i] == 3) dp[i][1] = min (dp[i-1][0], dp[i-1][2]);
             if(a[i] == 3 || a[i]==2)

                dp[i][2] =  min (dp[i-1][0], dp[i-1][1]);








    }

    cout <<  min (dp[n-1][0], min(dp[n-1][1], dp[n-1][2])) << endl;
    return 0;
}
