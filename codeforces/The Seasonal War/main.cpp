#include <iostream>
#include<bits/stdc++.h>

using namespace std;
char arr[25][25];
bool vis[25][25];
int ans=0;
   int n;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

bool valid(int x, int y){
        if(x>=0 && x<n && y>=0 &&y<n &&arr[x][y]=='1' && vis[x][y]==0)return 1;
        else return 0;

}
void dfs(int x, int y){
        vis[x][y]=1;
        int newX, newY;
        for(int i=0;i<8;i++){
            newX= x + dx[i];
            newY= y + dy[i];

            if(valid(newX,newY))
                dfs(newX,newY);


        }


}

int main()
{

  int tc =1;
        while(scanf("%d",&n) != EOF){
            memset(vis,0, sizeof vis);
        ans=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
                cin>>arr[i][j];


     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='1' && vis[i][j]==0){
                dfs(i,j);
                ans++;

            }



        }

    printf("Image number %d contains %d war eagles.\n",tc++,ans);
        }
    return 0;
}
