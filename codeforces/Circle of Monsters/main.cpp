#include <iostream>
#include"bits/stdc++.h"

using namespace std;
int n;
 const int MAXN = 300000;
long long hp[MAXN];
long long b[MAXN];
bool vis [MAXN];

void boom (int index, long long damage){
        if(vis[index])return;

        hp[index] -= damage;
        if(hp[index] <= 0)
        {
            vis[index] = 1;
            boom((index +1 )%n , b[index]);

        }


}

int main()
{

    int t;cin>>t;
    while(t--){
      cin>>n;
      memset(vis, 0 ,sizeof vis);
       // vector<long long >hp(n),b(n);
        vector<pair < double, int>> knapsack;
        for(int i=0;i<n;i++){
            long long x,y;
            cin>>x>>y;
            hp[i] = x, b[i] = y;
            knapsack.push_back( {(double)x,i});

        }

        sort(knapsack.begin(),knapsack.end());
        long long ans = 0;
        for(int i=0;i<n;i++){
                int cur_idx = knapsack[i].second;
            if(vis[cur_idx])continue;
            ans+= hp[cur_idx];
            boom(cur_idx,hp[cur_idx]);


        }
    cout<<ans<<endl;

    }

    return 0;
}
