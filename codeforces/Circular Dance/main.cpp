#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int vis[2000009];
 int n;
vector<int>ans;
vector<pair<int,int>> v;


void b(int index, int cur){
            if(index>=n)return;
            if(vis[cur])return;
            vis[cur]=1;

            int x,y;
            x= v[cur].first;
            y=  v[cur].second;
                if(x== v[y].first || x== v[y].second){
                        if(!vis[y])
                        ans.push_back(y);
                            if(!vis[x])
                        ans.push_back(x);

                        vis[y]=1;
                        b(cur+2, x);

                }
                    else {
                                if(!vis[x])
                         ans.push_back(x);
                          if(!vis[y])
                        ans.push_back(y);
                        vis[x]=1;
                        b(cur+2, y);

                    }
}
int main()
{

    cin>>n;
    v.resize(n+1);
    for(int i=1;i<=n;i++)cin>>v[i].first>>v[i].second;
    ans.push_back(1);
    b(1,1);

for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
    return 0;
}
