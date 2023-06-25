#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum;
vector<int>v;
vector<int> ans;

int main()
{int n,k;cin>>n>>k;
v.resize(n);
for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];

}
        if(sum%k!=0){
        cout<<"No";return 0;
}
        int portion= sum/k;
    int temp = 0;
    int t2=-1;
    for(int i=0;i<n;i++){
                temp+= v[i];
        if(temp== portion){
        temp=0;

        ans.push_back((i)-(t2));
        t2= i ;

}
    if(temp>portion){ cout<<"No";return 0;}



}
cout<<"Yes\n";
   for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
    return 0;
}
