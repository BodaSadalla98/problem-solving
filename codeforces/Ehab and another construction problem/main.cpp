#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int >freq_sum ;
vector<int> nums;
vector<int> ans;

int main()
{
   int n,k;cin>>n>>k;


   nums.resize(n);
   for(int i=0;i<n;i++){
        cin>>nums[i];


   }
   sort(nums.begin(),nums.end());

   freq_sum.push_back(nums[0]);
   ans.push_back(nums[0]);

 for(int i=1;i<n;i++){
        ans.push_back(nums[i]- freq_sum[i-1]);
        freq_sum.push_back( freq_sum[i-1] + ans[i]);
 }
for(int i=0;i<ans.size();i++){
    if(ans[i]==0)ans.erase(ans.begin()+i--);

}

int t= ans.size();
   if(t< k){
    for(int i=0; i< (k- t);i++)
        ans.push_back(0);

   }

    for(int i=0;i<k;i++)cout<<ans[i]<<'\n';

    return 0;
}
