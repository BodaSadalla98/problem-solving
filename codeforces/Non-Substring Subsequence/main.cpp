#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int main()
{
   int t;cin>>t;
   while(t--){

        int n,q;
        cin>>n>>q;
        int sz=0,ez=0,so=0,eo=0;
        char s[101];
        for(int i= 0;i<n;++i){
                char c;cin>>c;
                s[i]=c;
            if(c == '0')
            {
                if(sz == 0)
                    sz = i+1;
                    ez = i+1;

            }
            else
            {
                if(so == 0)
                    so = i+1;
                    eo = i+1;

            }


        }

        for(int i = 0,r,l;i<q;++i){

            cin>>l>>r;

            if( (s[l-1] == '0' && sz < l ) ||
                (s[r-1] == '0' && ez > r ) ||
                (s[l-1] == '1' && so < l ) ||
                (s[r-1] == '1' && eo > r )

               )
               cout<<"YES\n";

            else
                cout<<"NO\n";


        }


   }
    return 0;
}
