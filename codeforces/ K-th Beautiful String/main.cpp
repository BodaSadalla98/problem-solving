#include <climits>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
       long long  n,k;cin>>n>>k;
        string ans = "";

       for(long long  i=0;i<n-2;i++)ans+="a";
         ans+="bb";
        long long  num;
        for(long long  i=1;i<=n;i++){
            if(k <= ( (i * (i+1) )/ 2) && k > ( (i * (i-1) )/ 2))
            {num = i;
            break;

            }

        }
        //cout << run <<endl;
        swap(ans[n-2], ans[n-1-num]);
        k  =  k - ( (num * (num-1) )/ 2)-1;
        swap(ans[n-1], ans[n-1 - k]);
        cout<<ans<<endl;

    }
    return 0;
}
