#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int a[300005];
set<int>s;
map <int,int>mp;
int main()
{

    int t;cin>>t;

    while(t--){
        s.clear();
        mp.clear();
        int ans = 1e9;
        int n,k,d;cin>>n>>k>>d;
         for(int i=0;i<n;i++)cin>>a[i];


        for(int i=0;i<n;i++){

                if(i<d){
                 mp[a[i]]++;
                 s.insert(a[i]);

                if(i == d-1 )ans =mp.size();

                }

                    else
                    {
                        mp[a[i-d]]--;

                        if(mp[a[i-d]] == 0 )s.erase(a[i-d]);

                        mp[a[i]]++;
                        s.insert(a[i]);


                        ans = min(ans, (int)s.size() );

                    }



        }


        cout << ans << endl;
    }

    return 0;
}
