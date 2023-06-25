#include <iostream>
#include"bits/stdc++.h"

using namespace std;
int h,w;
int vis[105][105]; char g[105][105];
int cost[105][105];
int dx[] = {0,0,-1,1};
int dy[]= {1,-1,0,0};
pair<int,int> route [101][101], target[2];
void zbfs(int a,int b, int x,int y){
        deque<pair<int,int> >q;
        for(int i=0; i<=h; ++i)
		for(int j=0; j<=w; ++j)
			cost[i][j]=1e9;
        memset(vis,0,sizeof(vis));

         for(int i=0;i<w+1;++i)
                 for(int j=0;j<h+1;++j)
                        route[i][j].first = route[i][j].second = -1;
         memset(route,-1,sizeof(route));
        q.push_front(make_pair(a,b));
        cost[a][b]=0;
        while(!q.empty()){
                int r=q.front().first, c=q.front().second;
                q.pop_front();
                if(r==x && c==y){
                printf("%d\n", cost[r][c]);

                 int row = x,col = y;
                while(route[row][col].first != -1&& route[row][col].second != -1){
                    cout<<route[row][col].first <<' '<<route[row][col].second<<' ';
                    row = route[row][col].first; col =route[row][col].second;
                }
                return;
            }

            if(vis[r][c] || g[r][c] == '*')
			continue;

			for(int i=0; i<4; ++i){

                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr<1 || nr>h || nc<1 || nc>w || vis[nr][nc])
				continue;

				int cos = cost[r][c];
				bool f = 0;
				if(g[nr][nc] == '#')
                    ++cos, f= 1;
                if(cost[nr][nc] > cos){
                        route[nr][nc] = {r,c};
                    cost[nr][nc]= cos;
                    if(f)
					q.push_back(make_pair(nr,nc));
				else
					q.push_front(make_pair(nr,nc));
                }


			}


        }


}
int main()
{
    int tt;cin>>tt;
    while(tt--){
            int c=0;
        cin>>h>>w;
        for(int i=1;i<=h;++i)
            for(int j=1;j<=w;++j){
                cin>>g[i][j];
                    if(g[i][j]=='$')
                        target[c++] = make_pair(i,j);
            }

            zbfs(target[0].first, target[0].second,target[1].first, target[1].second);

                 for(int i=0;i<w+1;++i)
                g[0][i] = g[h+1][i] = '.';
             for(int i=0;i<h+1;++i)
                g[i][0] =g[i][w+1] ='.';




    }
    return 0;
}
