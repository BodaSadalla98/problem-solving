#include <iostream>
#include"bits/stdc++.h"
using namespace std;
int ans = 0;
    vector<vector<int>>vis;
    int rows, column;
    void bfs(int x, int y, vector<vector<char>>& grid){

        if(x == rows || x < 0 || y == column || y < 0 || vis[x][y])return;

        vis[x][y]=1;

        if( x+1 < rows &&grid[x+1][y] == '1')
            bfs(x+1,y,grid);

         if(y+1 < column && grid[x][y+1] == '1')
            bfs(x,y+1,grid);

         if(x >0 &&grid[x-1][y] == '1')
            bfs(x-1,y,grid);

         if(y>0 && grid[x][y-1] == '1')
            bfs(x,y-1,grid);


        }
    int numIslands(vector<vector<char>>& grid) {
         rows = grid.size();
         if(rows > 0)
         column = grid[0].size();
        vis.resize(rows);
        for(int i = 0;i<rows;i++)
            vis[i].resize(column);


        for(int i = 0;i<rows;i++){
            for(int j = 0;j<column;j++){

                if(grid[i][j]== '1' && !vis[i][j]){
                        bfs(i,j, grid);
                        ans++;
                        }
            }

        }

        return ans;
    }
int main()
{
    vector<vector<char>> in(4);
    for(auto &i : in)
        i.resize(5);
    for(int i =0;i<4;i++){
        for(int j=0;j<5;j++)
            cin>>in[i][j];


    }
    cout<< numIslands(in);

    return 0;
}
