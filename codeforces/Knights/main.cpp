#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
char ans [101][101];

bool valid (int x,int y) {if(x>-1 && y>-1 && x<n && y<n && ans[x][y]==' ') return true; else return false;}


int dir_x [8] = {-2,-1,1,2,2,1,-1,-2};
int dir_y[8]=  {-1,-2,-2,-1,1,2,2,1};
bfs( ){

    queue<pair<int,int>>q;

    q.push(make_pair(0,0));
    ans[0][0]='W';

    while(!q.empty()){

            int x = q.front().first, y = q.front().second;

            q.pop();

            for(int i=0; i<8;i++){

                int newX = x + dir_x[i];
                int newY= y + dir_y[i];
                if(valid(newX,newY)){

                    if(ans[x][y]=='W')ans[newX][newY]= 'B';
                    else
                        ans[newX][newY]='W';


                    q.push(make_pair(newX,newY));
                }


            }









    }








}


int main()
{

    cin>>n;
    memset(ans, ' ', sizeof ans);
    bfs();

    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(ans[i][j]== ' ')ans[i][j] ='B';


        cout<<ans
        [i][j];
    }
        cout<<endl;

    }

    return 0;
}
