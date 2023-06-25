#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int ans[100001];
int n,m,k,x,y,z;
int vis[100005];
int arr[100001];
int vis2[100005];
vector<pair<int,int> >v[100005];
vector<pair<int,int> >g[200005];
long long cost[100005];
long long cost2[100005];
void dijkstra(){
priority_queue<pair<int , int>> q;
q.push(make_pair(0,1));
cost[1]=0;
for(int i=2;i<=n;i++)cost[i]= 1e18;
while(!q.empty()){
int currentnode= q.top().second;
long long currentcost= - q.top().first;
q.pop();
if(!vis[currentnode]){
vis[currentnode]=1;
for(int i=0;i<v[currentnode].size();i++){
 int newnode= v[currentnode][i].second;
 int  newcost= v[currentnode][i].first;

long long t= currentcost+newcost;

if(cost[newnode]>t){

   cost[newnode]=t;
 q.push(make_pair(-cost[newnode],newnode));

        }

    }


    }



    }

}
int tt=0;
void dijkstra2(){
priority_queue<pair<int , int>> q;
q.push(make_pair(0,1));
cost2[1]=0;
for(int i=2;i<=n;i++)cost2[i]= 1e18;
while(!q.empty()){
int currentnode= q.top().second;
long long currentcost= - q.top().first;
q.pop();
if(!vis2[currentnode]){
vis2[currentnode]=1;
for(int i=0;i<g[currentnode].size();i++){
 int newnode= g[currentnode][i].second;
 int  newcost= g[currentnode][i].first;

long long t= currentcost+newcost;

if(cost2[newnode]>t){

   cost2[newnode]=t;
 q.push(make_pair(-cost2[newnode],newnode));

        }

else if (t==cost2[newnode]&&!vis2[newnode]&&t==arr[newnode]&&ans[newnode])
tt++;
    }


    }



    }

}


int main()
{
   cin>>n>>m>>k;
for(int i=0;i<m;i++){
cin>>x>>y>>z;
v[x].push_back(make_pair(z,y));
v[y].push_back(make_pair(z,x));
g[x].push_back(make_pair(z,y));
g[y].push_back(make_pair(z,x));
}

for(int i=1;i<=n;i++)arr[i]=1e9;
for(int i=0;i<k;i++){
    cin>>y>>z;
    g[1].push_back(make_pair(z,y));
arr[y]=min(arr[y],z);
     ans[y]++;

}

dijkstra();
dijkstra2();


int counter=k;
for(int i=1;i<=n;i++){
    if (cost[i]!=cost2[i]&&ans[i]&&(cost2[i]==arr[i])){
counter--;


}

}

counter+=tt;
//for(int i=1;i<=n;i++)cout<<vis2[i]<<" "<<vis[i]<<endl;
cout<<counter;
}
