#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int ans ;

int main()
{
        int t,n;
        cin>>t;
        while (t--){
            ans =0;
            cin>>n;
            if (n<8)ans=1;

            else{
                for (int i=7;n>0&&i>1;i--){
                   if (n% i != 1 ){
                    ans+= n/i;
                    n= n%i ;
                   }
                }
            }




            cout<<ans<<'\n';
        }
    return 0;
}
