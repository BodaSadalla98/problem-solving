#include <iostream>
#include<bits/stdc++.h>
using namespace std;

char grid[9][9];
string s = "IEHOVA#";
vector<string> path;

pair<int,int>start;

int cur=0;
void dfs(int x, int y){
            cur++;
        if(grid[x][y]=='#')return;

        if(grid[x][y+1]== s[cur] )path.push_back("right"),dfs(x,y+1);
        else if(grid[x][y-1]== s[cur] )path.push_back("left"),dfs(x,y-1);
        else if(grid[x-1][y]== s[cur] )path.push_back("forth"),dfs(x-1,y);







}

int main()
{
    int q;cin>>q;
    while(q--){
            cur=-1;
            path.clear();
        int m,n;cin>>m>>n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
             if(grid[i][j]=='@')start= make_pair(i,j);

            }

            dfs(start.first,start.second);
        cout<<path[0];
            for(int i =1; i<path.size();i++)
                cout<<' '<<path[i];
            cout<<endl;




    }


    return 0;
}
