#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{

    int t;cin>>t;
    while(t--){
        int n ,k; cin>>n>>k;
        int ans =0;
        vector<int> X(n); vector<int> Y(n);
        for(int i=0;i<n;++i){
            int x,y;
            cin>>x>>y;
            X[i] = x, Y[i] = y;

        }
        int cnt=0;
        for(int i=0;i<n;++i){
                cnt = 0;
            for(int j=0;j<n;++j)
                if( abs(X[i] - X[j]) + abs(Y[i] - Y[j]) <=k )
                   cnt++;


               ans = max(cnt, ans);
        }

    if(ans == n)
        cout<<"1\n";
    else
        cout<<"-1\n";
    }
    return 0;
}
