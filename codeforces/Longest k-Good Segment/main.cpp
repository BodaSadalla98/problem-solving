#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int freq[1000000];
int main()
{
  int k,n;
cin>>n>>k;
for (int i=0;i<n;i++)cin>>arr[i];
int maxleft=0,makxright=0, cnt=0, ans=0;
int l=0,r=0;
while(r<n){
    freq[arr[r]]++;
    if(freq[arr[r]]==1){
cnt++;

}

if (cnt<=k){
    if(r-l> makxright-maxleft){maxleft=l;makxright=r;}
}
while(cnt>k){
    freq[arr[l]]--;
    if(freq[arr[l]]==0)cnt--;



l++;
}



r++;
}


cout<<maxleft+1<<" "<<makxright+1;
    return 0;
}

