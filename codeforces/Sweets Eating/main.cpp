#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<long long >ans;
int main()
{
    int n,m;cin>>n>>m;
    vector<int>v(n);
     vector<long long>sum(n);
    for(int i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    sum[0]= v[0];
     for(int i=1;i<n;i++){
            sum[i] = v[i] + sum[i-1];

     }



    for(int i=0;i<n;i++){
            long long temp=0;
        int days = (i+m) /m;
        int idx = i;
        for(int day=1;day<=days;day++){
                long long day_sum = 0;
                if(idx - m  >= 0)day_sum = sum[idx]-sum[idx-m];
                else
                    day_sum = sum[idx];




                idx-=m;
                temp+= day*day_sum;





        }


        ans.push_back(temp);

    }


   for(auto i : ans)cout<<i<<' ' ;
    return 0;
}
