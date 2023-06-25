#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int x1,y1,x2,y2;
char g[1001][1001];
int xd[4]={-1,0,1,0};
int yd[4]={0,1,0,-1};
int vis[1001][1001];
int ctr=0;




bool bfs(int x,int y)

{


queue<pair<int,int>> q;
vis[x][y]=0;

q.push(make_pair(x,y));
while(!q.empty()){
   pair<int,int>u=q.front();
   q.pop();


    for(int i=0;i<4;i++){
        int nx=u.first+ xd[i];int ny= u.second+yd[i];

        if(nx>=0&&nx<n&&ny>=0&&ny<m&&vis[nx][ny]==-1&&g[nx][ny]=='.'){

            vis[nx][ny]=vis[u.first][u.second] +1;

            cout<<"===="<<vis[nx][ny]<<"===="<<endl;
             if(x2==nx+1&&y2==ny+1)return 1;
            q.push(make_pair(nx,ny));

        }

    }


}




return 0;



}

int main()
{
    string s;
  cin>>n>>m>>k;
  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)

  cin>>g[i][j];}
//for(int i=0;i<n;i++)cout<<g[i]<<endl    ;
  cin>>x1>>y1>>x2>>y2;

    memset(vis,-1,sizeof vis);
  bfs(x1-1,y1-1);
  cout<<"==="<< vis[x2-1][y2-1]<<"====";
  //cout<< (vis[x2][y2])/k;
    return 0;
}
