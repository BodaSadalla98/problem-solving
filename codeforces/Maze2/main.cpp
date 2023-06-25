#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int n,m,k;
vector <string>v;
stack<pair<int, int>> st;
 int cost[500][500];

 int dx[4]= {0,0,-1,1};
 int dy [4]= {-1,1,0,0};

 void BFS(int x,int y){
    queue<pair<int,int>> q;
     q.push(make_pair(x,y));
     cost[x][y]=0;
     while(! q.empty()){

        auto src = q.front();
        st.push(src);
        q.pop();
        for(int i=0;i<4;i++){
            int newx = src.first + dx[i];
            int newy = src.second + dy[i];

            if(newx <0 || newx >=n || newy<0 || newy>=m || v[newx][newy]=='#' || cost[newx][newy] != -1)
                continue;

            cost[newx][newy] = 1 + cost[src.first][src.second];
            q.push(make_pair(newx,newy));



        }












     }









 }



int main()
{
    int chosenx,choseny;

    memset(cost, -1, sizeof cost);
    cin>>n>>m>>k;
    v.resize(n);
    for(int i=0;i<n;i++){
            cin>>v[i];


    for(int j=0;j<m;++j)
        if(v[i][j]=='.')chosenx=i,choseny=j;

    }

    BFS(chosenx,choseny);
    while (k--){
            int x= st.top().first;
                int y= st.top().second;
        v[x][y]= 'X';
        st.pop();


    }

    for(int i=0;i<n;i++)
        cout<<v[i]<<endl;


    return 0;
}
