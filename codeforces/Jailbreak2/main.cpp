#include <iostream>
#include"bits/stdc++.h"

using namespace std;
int h,w;
int vis[105][105]; char g[105][105];
int cost[105][105];
int dx[] = {0,0,-1,1};
int dy[]= {1,-1,0,0};
pair<int,int> route [101][101], target[2];
int zbfs(int a,int b){
        deque<pair<int,int> >q;
        int pass[105][105];
        memset(pass,0,sizeof(pass));

        for(int i=0; i<=h; ++i)
		for(int j=0; j<=w; ++j)
			cost[i][j]=1e9;
        memset(vis,0,sizeof(vis));

         if(g[a][b] == '*')return 1e9;

        q.push_front(make_pair(a,b));
        cost[a][b]=  (g[a][b]== '#' );

        while(!q.empty()){
                int r=q.front().first, c=q.front().second;
                q.pop_front();


            //if(vis[target[0].first][target[0].second] && vis[target[1].first][target[1].second]){
                    //return cost[target[0].first][target[0].second] + cost[target[1].first][target[1].second];

           // }
            if(vis[r][c])
			continue;
            vis[r][c]=true;


			for(int i=0; i<4; ++i){

                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr<1 || nr>h || nc<1 || nc>w || vis[nr][nc] || g[nr][nc] == '*')
				continue;

				int cos = cost[r][c];
				bool f = 0;
				if(g[nr][nc] == '#' && !pass[nc][nr])
                    ++cos, f= 1;
                if(cost[nr][nc] > cos){
                        if(g[nr][nc] == '#' && !pass[nc][nr])
                            pass[nc][nr];


                        route[nr][nc] = {r,c};
                    cost[nr][nc]= cos;
                    if(f)
					q.push_back(make_pair(nr,nc));
				else
					q.push_front(make_pair(nr,nc));
                }


			}


        }

return cost[target[0].first][target[0].second] + cost[target[1].first][target[1].second];


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



              /**   for(int i=0;i<w+1;++i)
                g[0][i] = g[h+1][i] = '.';
             for(int i=0;i<h+1;++i)
                g[i][0] =g[i][w+1] ='.';.
                **/
                int ans=1e9;
                for(int i=1;i<=h;++i)
                for(int j=1;j<w;++j){
                        ans = min (ans,zbfs(i,j));


                }
                cout<<ans<<endl;




    }
    return 0;
}
