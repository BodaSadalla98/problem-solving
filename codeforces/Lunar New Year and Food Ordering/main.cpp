#include <iostream>
#include<bits/stdc++.h>


using namespace std;
int n,m;
long long ans=0;
long long  remain[100005],cost[100005];
priority_queue<pair<int,int>> cost_queue;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>remain[i];
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        cost[i]=temp;
        cost_queue.push(make_pair(-1*temp,i));

    }

    long long  a,b;
    for(int i=0;i<m;i++){
        ans=0;
        cin>>a>>b;
        if(remain[a]>=b){
            remain[a]-=b;

            ans+=b*cost[a];
        }
        else
        {
             b-=remain[a];
             ans+=remain[a]*cost[a];
                remain[a]=0;


            while(b>0){
                       int index=cost_queue.top().second;
                    int lowest_remain = remain[index];
                if(cost_queue.empty()){ans=0;break;}
                else{

                    if(lowest_remain >= b){
                        remain[index]-=b;
                        ans+=b*cost[index];
                        b=0;



                    }

                else
                {
                    b-=remain[index];
                    ans+=remain[index]*cost[index];
                    remain[index]=0;

                }
                if(remain[index]==0)cost_queue.pop();

                }



            }


        }




       cout<<ans<<'\n';
    }

    return 0;
}
