#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;cin>>q;
    while(q--){
        int ans =0,need =0,help = 0;

        int n;cin>>n;
        for(int i=0;i<n;i++){
            string s; cin>>s;
            int sz = s.size();
            if(sz%2){
                ans++;
                help+=sz;
                continue;
            }
int zero=0,one=0;
            for(int j=0;j<sz;j++){
                if(s[j] =='0')zero++;
            else
                one++;
            }
            if( (zero %2 && one %2 ) || (!zero%2 && !one %2 ))need++;
            else ans++;

        }

        /**
        if(need %2 == 0 )need ++;
        ans+= (need+need-1)/2;
        ans += help;
        ans = min(ans,n);
        **/
        ans = n;
        if(need%2 && help ==0 )ans--;

         cout <<ans << endl;

    }

    return 0;
}
