#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int cost [20004];


void bfs(int u, int en){
    memset(cost,-1, sizeof cost);

        queue<int>q;
        q.push(u);
        cost[u]=0;

        while(!q.empty()){
            if (cost[en]!= -1)break;

            int top = q.front();

       //     if(top ==0)break;
            q.pop();

            for(int i=0;i<2;i++){
                    int next;
                    if(!i)
                       next = top *2;
            else
                    next = top -1;


                 if(cost[next] != -1 || next ==0 )continue;

            cost[next] = cost[top] +1 ;
            q.push(next);



            }




        }








}
int main()
{

    int n,m;
    cin>>n>>m;

    bfs(n,m);

    cout<<cost[m];
    return 0;
}
