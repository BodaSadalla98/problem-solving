#include <iostream>
#include"bits/stdc++.h"
using namespace std;

const int MAX = 1e5+1;
int nextt[MAX], last[MAX], dp[MAX],a[MAX];

int main()
{

    int n;
    cin>>n;
    while(n){
        for(int i=0;i<n;++i)
            cin>>a[i];

        memset(last, -1 , sizeof last);

        for(int i=0;i<n;++i){
            nextt [i] = last[a[i]];
            last[a[i]] = i;
        }
        memset(dp, -1, sizeof dp);
        dp[n] = 0;
        for(int i=n-1;i>=0;--i){
            dp[i] = max(dp[i], dp[i+1]);
            if(nextt[i] !=-1){
                dp[i] = max(dp[i], (dp[nextt[i]+1] + (a[i] ==999 ? 3:1)) ) ;

            }

        }


        cout << dp[0] << endl;
        cin>>n;
    }

    return 0;
}
