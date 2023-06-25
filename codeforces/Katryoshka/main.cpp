#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
      freopen("katryoshka.in", "r", stdin);
    int n,m,k, t;
    cin>>t;
    for(int i=1;i<=t;i++){
            long long ans = 0;
        cin>>n>>m>>k;
        int mini = min (n, min (m,k));

        ans += mini;
        n-=mini;
        k-=mini;

        ans += min (k , (n/2));






        printf("Case %d: %d\n",i,ans);




    }





    return 0;
}
