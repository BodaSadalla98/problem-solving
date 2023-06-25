#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--){
          int maxi = 0;
            int n,k;cin>>n>>k;
            vector <int> v(n);
            for(int i=0;i<n;i++){
                    cin>>v[i];
                    maxi = max (v[i],maxi);
            }
            map<int ,int>sums;
            vector<int> targets;

          //  vector <int>sums( (2*k)+1 , 0);
            for(int i=0;i<n/2;i++)
                {
                    int sum = v[i] + v[n-i-1];
                    sums[sum]++;
                }
                int max_freq=0;
                int temp = 0;
            for(auto i : sums){
                if( i.second > max_freq){
                    max_freq = i.second;
                    temp = i.first;
                }


            }
            for(auto i : sums){
                if( i.second == max_freq){
                    targets.push_back(i.first);
                }


            }


            int ans=0, total_ans=INT_MAX;
                if ((int)targets.size() == n/2)
                    targets.push_back(maxi+1);

            for(auto target : targets){
                    ans = 0;
            for(int i=0;i<n/2;i++){
                int a = v[i], b = v[n-i-1];
                if(a+b == target)continue;
                else if (a+b > target){
                        int diff = a+b-target;
                    a= max(a,b);
                    if(a>diff)ans++;
                    else
                        ans+=2;
                }
                else
                {
                     int diff = abs (a+b-target);
                     a= min(a,b);
                     if(k-a >= diff)ans++;
                     else
                        ans+=2;
                }

            }
                total_ans = min(ans, total_ans);
            }

         cout<<total_ans<<endl;
   }
    return 0;
}
