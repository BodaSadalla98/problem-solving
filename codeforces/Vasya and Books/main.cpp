#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> vis;
vector<int>ans;
int main()
{

stack<int > s;
int n, temp;


    cin>>n;

vis.resize(n+1);
//memset(vis, 0, sizeof vis);
    for(int i=0;i<n;i++){

            cin>>temp;
            s.push(temp);}
 int cnt;

for(int i=0;i<n;i++){
        int temp;
        cin>> temp;
        int cnt =0;
        if( vis [temp] ==0 ){

            while(s.top() != temp){
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
