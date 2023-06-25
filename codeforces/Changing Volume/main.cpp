#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;

        a = abs(a-b);
        int ans=0;
        ans+= a/5;

        if(a%5 >2)ans+=2;
        else if (a%5==1 || a%5==2)ans++;


        cout << ans << endl;

    }

    return 0;
}
