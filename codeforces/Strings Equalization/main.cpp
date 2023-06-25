#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool a[26], b[26];
int main()
{
    int q;
    cin>>q;
    while(q--){
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
       string s,t;cin>>s>>t;
        bool can = false;


        for(int i=0;i<s.size();i++){
            a[s[i]- 'a'] = 1;
            b[t[i]- 'a'] = 1;

        }
        for(int i=0;i<27;i++){
            if(a[i] == 1 && b[i]==1)can =1;
        }




if(can)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
