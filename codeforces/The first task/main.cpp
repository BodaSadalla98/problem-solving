#include <iostream>
#include<bits/stdc++.h>

using namespace std;
 set<int>s;
        vector<int >v;
int main()
{


    freopen("task.in","r", stdin);
    int t;cin>>t;
    while(t--){
            v.clear();
        s.clear();
        int n;cin>>n;

        long long  ans = 1e18, dups = 0;
        for(int i=0;i<n;i++){

            int temp; cin>>temp;
            if(s.find(temp) != s.end())dups++;
            else
            {
                s.insert(temp);
                v.push_back(temp);

            }

        }

        sort(v.begin(), v.end());

        int sz = v.size();
        for(int i=1;i<=sz;i++){

                long long a =  v[i-1]-i + sz - i ;
            ans = min (ans,a);


        }



            cout<<ans + dups<<endl  ;
    }

    return 0;
}
