#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int score = 0;
    vector <int> ans;
    freopen("e.out", "w",stdout);
    freopen("e_also_big.in", "r",stdin);

    int n,m, a[100011];
    cin>>n>>m;
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=m-1;i>=0;i--){
        if(a[i] <= n){
            n-= a[i];
            score += a[i];
            ans.push_back(i);

        }


    }

    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i : ans )
    {
    cout<<i<<' ' ;
    }

    return 0;
}
