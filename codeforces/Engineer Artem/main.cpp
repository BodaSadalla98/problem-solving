#include <iostream>
#include"bits/stdc++.h"

using namespace std;
bool vis[101][101];
int dx[] = {0,0,1,-1};
int dy[]= {1,-1,0,0};
int g[101][101];
int n,m;
bool valid (int x,int y){
    return x>=0 && y>=0 && y<m && x<n ;
}
void dfs(int x,int y){

    vis[x][y]=1;
    for(int i=0;i<4;++i){
            int nX = x+dx[i],nY = y+ dy[i];
             if( valid(nX,nY)&& g[x][y]== g[nX][nY] && vis[nX][nY] )
                g[x][y]++;
        if(valid(nX, nY )&& !vis[nX][nY]){

            if(g[x][y]== g[nX][nY] )
                g[nX][nY]++;
            dfs(nX,nY);


        }

    }



}
int main()
{
    int t;cin>>t;
    while(t--){
         memset(vis,0,sizeof vis);
         cin>>n>>m;
         for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                cin>>g[i][j];

         dfs(0,0);

       //  cout<<"=========================="<<endl;
         for(int i=0;i<n;++i){
            for(int j=0;j<m;++j)
                cout<<g[i][j]<<' ';
            cout<<endl;
         }

        // cout <<"================================="<<endl;

    }


    //cout << "Hello world!" << endl;
    return 0;
}
