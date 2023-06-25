#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int n , m , k , cost[510][510] ;

 string g[510];
 int dx[4]={0,0,1,-1};
 int dy[4]={-1,1,0,0};


 stack<pair<int ,int>> st;
 void bfs(int x, int y){
 queue <pair<int ,int>> q;
 cost[x][y]=0;
 q.push(make_pair(x,y));
 while(q.size()){
    pair<int ,int > src=q.front();

       st.push(src);

    q.pop();

    for(int i=0;i<4;i++){
        int newX=src.first + dx[i];
        int newY=src.second + dy[i];

        if(newX<0 || newY<0 || newX >=n || newY >= m)continue;
        if(cost[newX][newY]!=-1) continue;
        if(g[newX][newY]=='#')continue;


        cost[newX][newY]=cost[newX][newY]+1;
        q.push(make_pair(newX,newY));


     }

 }
 }
int main()
{

    scanf("%d%d%d",&n,&m,&k);
    int sx=-1;  int sy=-1;
    memset(cost,-1,sizeof cost);
    for(int i=0;i<n;i++){
            cin>> g[i];
        for(int j=0;j<m;j++){
                if(g[i][j]=='.')
                  sx=i,sy=j;


        }


    }

    bfs(sx,sy);

    while(k>0){
        k--;
        g[st.top().first][st.top().second]='X';
        st.pop();

    }

     for(int i=0;i<n;i++){

         //for(int j=0;j<m;j++){
             cout<<g[i];
            // }

     cout<<endl;


     }
    return 0;
}
