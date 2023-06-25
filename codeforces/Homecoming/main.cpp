#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{       int t;cin>>t;

while(t--){
    int ans; string s;
    int a,b,p;cin>>a>>b>>p;
    cin>>s;
    int cost=0;
    char last = s[s.size()-1];
    ans = s.size()-1;
    for(int i = s.size()-2;i>-1;i--){
        if(s[i] == last && i != s.size()-2) { ans = i;continue;}

        s[i] == 'A' ? cost+= a : cost+= b;
        last = s[i];

        if(cost > p)break;
        ans = i;



    }


   printf("%d\n",ans+1);
}

    return 0;
}
