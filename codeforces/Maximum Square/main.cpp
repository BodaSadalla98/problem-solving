#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k ;
    cin>>k;
    while(k--){
        int ans=0,n;
        cin>>n;
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++){
            int t;cin>>t;
            for(int j=1;j<=t;j++)
                v[j]++;

        }

       // sort(v.rbegin(),v.rend());
       for(int i=1;i<=n;i++){
                if(v[i]>=i)
                    ans = max(ans,i);

       }

                cout <<ans << endl;

    }

    return 0;
}
