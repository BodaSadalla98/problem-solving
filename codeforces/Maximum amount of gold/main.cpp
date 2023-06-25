#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int W,n;
 long long  DP[301][300*1000];

int dp(int index, int sum){

        if(sum > W )return DP[index][sum] = -1* 1e9;
        if(index==n)return sum;
        if( DP[index][sum] !=0)return DP[index][sum];
        return DP[index][sum] = max( dp(index+1, sum+ v[index]), dp(index+1, sum));

}
int main()
{

    cin>>W>>n;
        v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];

cout<<dp(0,0);
    return 0;
}
