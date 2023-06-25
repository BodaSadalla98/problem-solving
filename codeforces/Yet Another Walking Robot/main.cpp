#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        //int vis [200001][200001];
       map <pair<int,int>, int>vis ;
       int curX=0,curY=0;
     pair<int,int> ans;
       bool can = 0,f=0;
       int best = 1e9;
        string s;cin>>s;

        vis[{0,0}] = 1;

        for(int i=0;i<n;i++){
            if(s[i]=='L')curX--;
            else if (s[i]=='R')curX++;
                 else if (s[i]=='U')curY++;
                  else if (s[i]=='D')curY--;

                  if(vis[{curX,curY}] == 0)vis[{curX,curY}] =i+1;
                  else
                  {


                    can = 1;
                    if(i- vis[{curX,curY}] < best){
                            best = i- vis[{curX,curY}];
                    ans = {vis[{curX,curY}]+1 ,i+1};
                    if(!f && !curX&& !curY){
                        f=1;
                        ans.first=1;
                    }
                    }

                  }


        }

       if(can)cout<<ans.first<<' ' <<ans.second <<endl;
       else cout<<-1<<endl;



    }
    return 0;
}
