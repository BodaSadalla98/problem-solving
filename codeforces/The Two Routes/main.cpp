#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int adj[404][404], roadadj[404][404];
 int costRail[404];
 int costRoad[404];
  int cost[404];
  int n,m;

 void bfs1(int s){


        memset(cost, -1 , sizeof cost );



        cost[1]=0;
       queue<int>q;
       q.push(1);
       while(!q.empty()){

            int u = q.front();
            q.pop();


            for(int i=2;i<=n ;i++){



                if(cost[i]==-1 && adj[u][i] == s  && i !=u ){
                    cost[i]= cost[u] +1;
                    q.push(i);

                }



            }


       }


 }


int main()
{

   cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }

    int s;
    if(adj[1][n])s=0;
    else
        s=1;
    bfs1(s);




    cout << cost[n]<< endl;
    return 0;
}
