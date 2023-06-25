#include <iostream>
#include "bits/stdc++.h"
using namespace std;


int main()
{

    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        vector<int>t(n);
        for(int i=0;i<n;i++)
            cin>>t[i];

        sort(t.begin(),t.end());
        int ans =1e9;
       for(int i=1;i<=t[n-1];++i){
            int c = i, cur = 0;

                for(int j=0;j<n;++j){
                        if(c< t[j])
                            c= t[j];
                    cur += abs(t[j]-c++);


                }
                ans= min(ans,cur);


       }
        cout<<ans<<endl;


    }

    return 0;
}
