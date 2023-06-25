#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n ,m ,k;
int a [20]; long long  dp [1<<19][19];

 int cost [100][109] = {0};
int ones(int mask){
    int ret =0;

    while (mask > 0 ){
        ret += mask % 2;
        mask/=2;

    }
    return ret;

}


long long calc(int mask, int prev){

            if( ones(mask) ==m) return 0;

            long long &ret = dp[mask][prev];

            if(ret != -1)return ret ;

            ret =0;

            for(int i=0;i<n;i++){

                if(  ((1<<i) & mask)  == 0 ) {


                    ret = max (ret,( a[i] + cost[prev][i] + calc( ( mask | (1<<i) ) , i)) );
                }



            }


            return ret;





}

int main()
{
 cin>>n>>m>>k;
 memset(dp, -1, sizeof dp);
 for(int i=0;i<n;i++)cin>>a[i];


 for(int i=0;i<k;i++){
    int x,y,z;
    cin>>x>>y>>z;
    cost[--x][--y] = z;

 }

 cout<< calc (0,18);

    return 0;
}
