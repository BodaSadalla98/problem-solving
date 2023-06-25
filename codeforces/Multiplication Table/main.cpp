#include <iostream>
#include "bits/stdc++.h"
using namespace std;
bool a[50001][5001];
long long bfs(int r,int c,long long k){
    long long rank =1;

    priority_queue<pair<pair<long long , long long >, pair<int ,int> >> q;
    q.push({ {-1,1},{1,1}});




long long temp =0;



    while(!q.empty()){
        pair<pair<long long , long long >, pair<int ,int> > u;
        u = q.top();

         q.pop();

        long long cur_rank = u.first.second;
        int cur_r = u.second.first;
        int cur_c = u.second.second;

        if(++temp ==k){

            return cur_c * cur_r;
        }


            if(cur_r!=r){
                q.push({{-(cur_r+1)*(cur_c) ,++rank},{cur_r+1,cur_c}});
            }
            if(cur_c!=c){
               q.push({{-(cur_r)*(cur_c+1) ,++rank},{cur_r,cur_c+1}});
            }



    }



}

int main()
{
    int n, m; long long k;
    cin>>n>>m>>k;

    cout << bfs(n,m,k)<< endl;
    return 0;
}
