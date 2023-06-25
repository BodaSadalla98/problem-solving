#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--){
        int n,x,a,b;
        cin>>n>>x>>a>>b;
            int ans = abs(a-b);
            int minpos,maxpos;
            if(a>b)swap(a,b);

            minpos = max(1 , a-x);
            x-= a- minpos;


            if(x>=0){
                maxpos = min(n , b+x);

            }
            ans = max(ans, maxpos-minpos);


    cout<<ans<<endl;
   }
    return 0;
}
