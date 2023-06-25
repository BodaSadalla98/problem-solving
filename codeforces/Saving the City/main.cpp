#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        bool in = 0;
        int a,b,cnt=0,ans =0;;string c,s="";
        cin>>a>>b>>c;
        for(int i=0;i<c.size();++i){
            if( i &&(c[i]==c[i-1]&& c[i]=='1' ) )
            continue;
        else
            s+=c[i];

        }


        for(int i=0;i< (int)s.size();++i){
            if(s[i] == '0'){

                cnt++;
                continue;
            }
            else
            {
                     if(cnt*b <= a && in){
                        ans+= cnt *b;

                     }
                    else
                    {
                        ans+= a;

                    }

               cnt=0;
                in =1;

        }




        }

        cout << ans << endl;
    }

    return 0;
}
