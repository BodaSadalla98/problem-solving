#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int tt;cin>>tt;
    while(tt--){
        int n;cin>>n;
        string s; cin>>s;
        int last = n;
        int ans = 0;
/**

            if(s[n-1]=='0')
                s+='1';
            else
                s+='0';
        if(s[n-1] != s[0])
            last= n-1;


        for(int j= last-1;j>0;--j){
                    if(s[j]==s[j+1]){last=j;break;}
                }
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]){
                    ans++;
                reverse(s.begin()+i,s.begin()+last+1 );
                for(int j= last-1;j>i;--j){
                    if(s[j]==s[j+1]){last=j;break;}
                }
                i=0;
            }
        }


        **/


        int a=0,b=0;
        for(int i=1;i<n;++i){
            if(s[i]== s[i-1]){
                ++a;

            }
            else{

                b= max(b,a);
                    a=0;
            }

        }
        b= max(b,a);
          cout << b << endl;
    }


    return 0;
}
