#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{

    int t;cin>>t;


    while(t--){
            int a[200001];
    memset(a, 0 , sizeof a);
           int cnt =1;
     set<int>s;
     int t= 0;
        int n;cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
         vector<int>ans;
         ans.push_back(1);
         int d = 1;
         for(int i=1;i<n;i++){
            if(v[i-1] == v[i] )ans.push_back(cnt);
            else
            {

                cnt += d;
                d *= -1;
                t= max(t,cnt);
                ans.push_back(cnt);
            }
         }

         if( ( v[0] != v[n-2] ) &&  (v[n-1] != v[0]) && ( v[n-1] != v[n-2] )) {cnt = 3;ans[n-1]=3; }
            t= max(t,cnt);
          cout <<t<< endl;
         for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
         }
         cout<<endl;

    }

    return 0;
}
