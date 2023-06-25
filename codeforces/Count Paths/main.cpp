#include <iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int R,C;
int dp[101][101];
int calc (int r , int c ){
        if (r == R -1  && c == C -1)return 1;
        else if (r ==R || c == C)return 0;

        int  &x = dp[r][c];
        if(x !=  -1) return x;

        int a = calc (r+1,c);
        int b = calc (r, c+1);

        return  x = (a +b ) % MOD;


}
int main()
{

    int r , c;
    while(1){
            memset(dp ,  -1 , sizeof dp);
        cin>>r>>c;
        if(r == -1)break;

        R = r+1, C = c+1;

        cout <<calc (0,0) <<endl ;


    }





    return 0;
}
