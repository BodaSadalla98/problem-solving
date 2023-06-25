#include <iostream>
#include"bits/stdc++.h"

using namespace std;


int dx[] ={0,0,1,-1};
int dy[]={1,-1,0,0};
int cost[2001][2001];
char g[2001][2001];
int H,W;
vector<vector<pair<int,int>>>v(26);

bool valid(int x , int y ){
return x<H && y<W && x>=0 && y>=0 && g[x][y] != '#' && cost[x][y] == -1;

}
void bfs(int bx, int by){
memset(cost,-1, sizeof cost);
queue<pair<int ,int>>q;
q.push({bx,by});
cost[bx][by]= 0;

while(!q.empty()){
    int x = q.front().first, y = q.front().second;
    q.pop();

    if(g[x][y]== 'G')
        return;
    for(int i =0;i<4;++i){
        int nX = x + dx[i], nY = y+ dy[i];
        if(valid(nX,nY)){
            cost[nX][nY] = 1 + cost[x][y];
            q.push({nX,nY});
        }

    }
    if(g[x][y] >= 'a' && g[x][y] <= 'z'){
            int cur = g[x][y] - 'a' ;
    for(int i=0;i<(int)v[ cur].size();++i){
        if(v[cur][i].first ==x && v[cur][i].second ==y)continue;
        int nX = v[cur][i].first, nY = v[cur][i].second;
        if(cost[nX][nY] == -1 ){
            cost[nX][nY] = 1 + cost[x][y];
            q.push({nX,nY});
        }

    }

        v[cur].clear();

    }




}



}
int main()
{
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
    cin>>H>>W;
    int sx,sy,ex,ey;
    for(int i=0;i<H;++i)
    for(int j=0;j<W;++j){
       //cin>>g[i][j];
       scanf(" %c",&g[i][j]);


          if(g[i][j] >= 'a' && g[i][j] <= 'z'){
            int cur = g[i][j] - 'a' ;
            v[cur].push_back({i,j});

          }
        if(g[i][j]== 'S')
            sx=i,sy=j;
        else if (g[i][j]== 'G')
            ex=i,ey=j;
    }
    bfs(sx,sy);

    cout << cost[ex][ey] << endl;
    return 0;
}
