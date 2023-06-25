#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int a[301];
int dp [301][2* 300*301];


int dP(int index, int sum ){

        if(index == n ){
            if (sum == (300*300)) return 0;
            else
                return 1e9;

        }

        int &ret = dp[index][sum];
        if(ret!= -1) return ret;

        return ret = min( (dP(index+1, sum + a[index] )) , (1 + dP(index+1,sum - a[index] )) );







}

int main()
{
    cin >>n ;

    for(int i=0;i<n;i++){
        int  s =1 ;int t;char b;
        if(i>0){

                cin>>b;
                if(b== '-')s = -1;

        }
        cin>>t;
        a[i] = s * t ;




    }
    memset(dp, -1, sizeof dp);


    int ans =  dP(1, a[0]  + (300*300) ) ;
    if(ans > 400)ans = -1;
    cout <<  ans << endl;
    return 0;
}
