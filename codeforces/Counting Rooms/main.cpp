#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int n,m;
string g[1003];
bool vis[2001][2001];
int cost[2001][2001];
bool valid(int x,int y){
    return x>=0 && y>=0 && x<n && y<m && g[x][y] !='#' ;
}
int dx[] = {0,0,1,-1};
int dy []= {1,-1,0,0};
queue<array<int,2>>q;
pair<int,int> parent[1001][1001];
void bfs(int x, int y){


    q.push({x,y});

    parent[x][y] = {-1,-1};
    while(!q.empty()){
        array<int,2>u = q.front();
        int curX = u[0], curY = u[1];
        q.pop();
        //vis[curX][curY]=1;

        if(g[curX][curY]=='B')
            return;

        g[curX][curY]= '#';
    for(int i=0;i<4;++i){
        int nX = dx[i]+curX, nY = curY+dy[i];
        if(! (nX>=0 && nY>=0 && nX<n && nY<m && g[nX][nY] !='#'))continue;
            q.push({nX,nY});
           parent[nX][nY] = {curX,curY};
    }
    }


}

int main()
{

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

   cin>>n>>m;
   int endX,endY, startX,startY;
   int ans=0;
   for(int i=0;i<n;++i){
       cin>>g[i];

    for(int j=0;j<m;j++){

        if(g[i][j]=='A')
            startX=i,startY=j;
        else if(g[i][j]=='B')
            endX=i, endY=j;

    }
}
        parent[endX][endY]={-1,-1};
        bfs(startX,startY);

    if(parent[endX][endY].first != -1){
        cout<<"YES\n";


         vector<pair<int,int>> path;
    int a,b;
    a = endX,b = endY;

        while(parent[a][b].first!=-1){
            path.push_back({a,b});
            int t1,t2;
            t1 =a;
            a = parent[a][b].first, b= parent[t1][b].second;

        }
        cout<<(int)path.size()<<endl;
        reverse(path.begin(),path.end());

        int lastX = startX, lastY=startY;
    for(int i=0;i<(int)path.size();++i){
        for(int j=0;j<4;++j){
            if(lastX+dx[j] == path[i].first && lastY+dy[j]== path[i].second){
                if(j==0)
                    cout<<"R";
                else if(j==1)
                    cout<<"L";
                else if(j==2)
                    cout<<"D";
                else
                    cout<<"U";
            }

        }
        lastX = path[i].first, lastY=path[i].second;

    }

    }


    else
        cout<<"NO\n";



    return 0;
}
