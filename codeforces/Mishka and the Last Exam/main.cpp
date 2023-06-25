#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<long long >ans;

int main()
{
    long long maxi = 1e18, mini=0;
    int n;
    cin>>n;
    ans.resize(n);
    for (int i=0; i<n/2;++i){
        long long t;
        cin>>t;
        for (long long j=mini;j<=t;j++){

            if ((t-mini) <= maxi){
                maxi = (t-mini);
                ans[i]= mini;
                ans[n-i-1]= (t-mini);
                    break;

            }
            else
                mini= (t- maxi);


        }


    }








    for(int i=0;i<n;i++)cout<<ans[i]<<' ' ;

    return 0;
}
