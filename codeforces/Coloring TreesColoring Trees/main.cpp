#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int n,m,k;
int c [101], p[101][101];
long long oo = 1e15;
long long dp[101][101][101];

long long  calc (int index, int color , int noColors){

                if(index == n )
                    return (k == noColors) ?  0 : oo;

                long long &ret = dp[index][color][noColors];

                if(ret != -1 )return ret ;

                    ret = oo;

                if(c[index] == 0){
                        for(int i=1;i<=m;i++){

                            if(color ==i ){
                                    ret =  min (ret,  p[index][i-1]  + calc(index+1 , color, noColors));

                            }

                            else
                            {
                                 ret = min(ret, p[index][i-1]  + calc(index+1 , i, noColors+1));

                            }

                        }


                }
                else
                {
                    if(c[index]== color){

                       ret =  min (ret, calc(index+1, color, noColors));
                    }
                    else
                        ret = min (ret, calc (index+1,c[index], noColors+1));


                }



        return ret;










}

int main()
{

    cin>>n>>m>>k;
    for(int i=0;i<n;i++)cin>>c[i];

    for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                    cin>>p[i][j];


          memset(dp , -1, sizeof dp);

    long long ans  = calc (0,0,0);
    if(ans ==oo)ans = -1;

    cout<<ans;


    return 0;
}
