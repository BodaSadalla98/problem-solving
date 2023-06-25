#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int vis[2000009];
 int n;
vector<int>ans;
vector<pair<int,int>> v;


void b(int index, int cur){
            if(index>=n)return;
            vis[cur]=1;
                ans.push_back(cur);

            int x,y;
            x= v[cur].first;
            y=  v[cur].second;
                if((x== v[y].first || x== v[y].second )&& !vis[y]){
                        b(index+1, y);
                }
                    else {
                        b(index+1, x);
                    }
}
int main()
{

    cin>>n;
    v.resize(n+1);
    for(int i=1;i<=n;i++)cin>>v[i].first>>v[i].second;

    b(0,1);

for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
    return 0;
}
