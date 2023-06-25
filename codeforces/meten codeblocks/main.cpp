#include <iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int > s;
vector<int> vis;
vector<int>ans;
vector<int>temmpoo;
int main()
{
int n, temp;


    cin>>n;

vis.resize(n+1);
ans.resize(n);
temmpoo.resize(n+1);
//memset(vis, 0, sizeof vis);
    for(int i=0;i<n;i++){

            cin>>temp;
            temmpoo[i]= temp;}
 int cnt;
for(int i=n-1;i>=0;i--)s.push(temmpoo[i]);
for(int i=0;i<n;i++){
        int t2;
        cin>> t2;
        int cnt =0;
        if( vis [t2] ==0 ){

            while(s.top() != t2){
             //   cout<<" ============="<<s.top()<<"===============";
                vis[s.top()]  = 1;
                s.pop();
                cnt++;

}
     vis[s.top()]=1;
    s.pop();cnt++;
    ans[i]=cnt;


}



}

for(int i=0;i<n;i++)cout<<ans[i]<<' ';

    return 0;
}
