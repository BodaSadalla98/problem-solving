#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//vector<int>v;
int main()
{

   //  v.resize(1e9 );
    cin.tie(0);
    cout.tie(0);
    ios_base ::sync_with_stdio(false);
    /**
    v[0]=0;
    for(int i=1; i<= 1e9; i++){
            v[i] += v[i-1];
        if(i | 1 ) v[i]*= -1;
    }
    **/
 int ans;
   int q;cin>>q;
   while(q--){
        int a,b;

    cin>>a>>b;


    ans = ceil((double)b/2.0);
    if(b%2 !=0)ans *=-1;
    if(a==1);
   else{

        a--;
    if(a%2==0)ans -= a/2;
    else
        ans += (a/2)+1 ;

   }
       // cout << v[b]- v[a-1]<<'\n';

        cout<<ans<<'\n';
   }
    return 0;
}
