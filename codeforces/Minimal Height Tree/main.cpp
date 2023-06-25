#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int tt;cin>>tt;
    while(tt--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i)cin>>v[i];
        int ans=1;
        int cnt=0;
        for(int i = 2;i<n;++i){
            if(v[i]>= v[i-1]){
                    ++cnt;continue;}
            else

            {
                i+=cnt;
                   cnt=0;

                ans++;

            }


        }


        cout<<ans<<endl;
    }
    return 0;
}
