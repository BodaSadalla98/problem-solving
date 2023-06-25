#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   string s;
cin>>s;
    long long n =0;
    for(int i=0;i<s.size();i++) n += s[i]-'0';

    int ans =0;

    if (s.size()>1)ans++;
    while(n >9){
            ans++;
        int t = n%10;
        while(n){
                n /=10;
                t+= n%10;}


        n = t;

    }

    cout<<ans;
        return 0;
}
