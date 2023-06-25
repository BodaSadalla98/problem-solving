#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int > ans, vis;
int main()
{
    vis.resize(101);
    int n;cin>>n;
    for(int i=0;i<n;i++){
            int t;cin >>t;
    for(int j=0;j<t;j++){
        int tem;cin>>tem;
        vis[tem]++;
        if (vis[tem]==n)ans.push_back(tem);
    }

    }

    for(auto i : ans )
    cout << i <<" " ;
    return 0;
}
