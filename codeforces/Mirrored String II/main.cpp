#include <iostream>
#include"bits/stdc++.h"

using namespace std;
string s;
char a[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X' , 'Y' };
bool pal[200];
int dp[1001][1001];
int ans=0;
bool calc(int i, int j){
    if(i>j){
        if(pal[s[i]] && pal[s[j]])
           return 1;
        else
            return 0;
    }

    if(i==j){
        if(pal[s[i]])
           return 1;
        else
            return 0;
    }

    int &ret = dp[i][j];
    if(ret != -1)
        return ret;

    ret = 0;

    if(s[i]==s[j] &&  pal[s[i]] ){
        ret = 1 & calc(i+1,j-1);

        }
    if(pal[s[j]])
    ret |= calc(i+1,j);
    if(pal[s[i]])
     ret |= calc(i,j-1);

    if (ret)
        ans = max(ans, j-i+1);
     return ret;
}
int main()
{
    for(int i=0;i<11;++i)
        pal[a[i]] = 1;

    int tt;
    cin>>tt;
    while(tt--){
        cin>>s;
        //memset(dp, -1, sizeof dp);
        for(int i=0;i<=1000;++i)
            for(int j=0;j<=1000;++j)
                dp[i][j]=-1;

calc(0, (int)s.size()-1);
        cout<<ans<<endl;

           // for(int j=0;j<=7;++j)
               // if(dp[i][j]==5)
              //  cout<<"Dp of " <<i <<' '<<j<<' '<<dp[i][j]<<endl;
    }

    return 0;
}
