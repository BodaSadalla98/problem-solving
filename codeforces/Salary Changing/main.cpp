#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;cin>>t;
    while(t--){
        long long l=0,r=0, m ;
        long long n , s;
        cin>>n>>s;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            long long a,b; cin>>a>>b;
                v.push_back({a,b});
       //     l = max(l,a);
         //   r = max(r,b);

        }


        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(i != n/2 )
                s-= v[i].first;


        }
        l = v[n/2].first;
        r = v[n/2].second;
        while(l<r){
            m = (l+r)/2;
            if( (n*m) < s)
                    l = m+1;
            else
                r = m;


        }



         cout << m<< endl;
    }

    return 0;
}
