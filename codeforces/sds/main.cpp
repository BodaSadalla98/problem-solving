#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int pal(string &s){
    int n = s.size();
    int ans=0;
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j ){
                int till = (j-i+1)/2;
                bool can = 1;
                if((j-i+1)%2)
                    till++;
            for(int k=0;k<till;++k){
                if(s[i+k] != s[j-k]){
                    can=0;break;
                }

            }
            if(can)ans++;
        }

    }
return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 int tt;cin>>tt;
 while(tt--){
    int n,q;
    cin>>n>>q;
    map<string, int>mp;
    int mx[100001][14][2];
    memset(mx, -1, sizeof mx);

    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        mp[s]=i;
        mx[i][0][0] = pal(s);
        mx[i][0][1] = i;

    }
    for(int k=1;k<14;k++){
        for(int i=0;i<n;++i){
            if(mx[i][k-1][0] != -1)
            mx[i][k][0] = max (mx[i][k-1][0],  mx[i+(1<<(k-1)) ][k-1][0]  );

        }
    }

    cout <<0;




 }



    return 0;
}
