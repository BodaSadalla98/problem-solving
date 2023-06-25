#include <iostream>
#include<bits/stdc++.h>

using namespace std;
long long dp [101][21];


long long calc (int reminder, int n, int k  ){
            if(n == k )

                return (reminder ==0) ?  1 : 0  ;

long long &ret = dp [reminder][n];

        if(ret != -1)return ret;

        ret = 0;

        for(int i=1; i<= reminder;i++){

                ret = max(ret, i* calc(reminder - i , n+1, k));

        }

        return ret ;




}

int main()
{
    int s, k ; cin>>s>>k;

    long long ans =0;
        memset(dp, -1 , sizeof dp);

      ans =   calc(s,0,k);

    cout << ans << endl;
    return 0;
}








