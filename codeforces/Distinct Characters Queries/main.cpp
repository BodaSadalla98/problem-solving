#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int a[100005][27];
string st;
int main()
{
    set<int> s;

    cin>>st;

a[0][ st[0] -'a' ]=1;
    for(int i=1;i<st.size();i++){
        int chara = st[i]- 'a';

         for(int j=0;j<26;j++){
                if(j == chara)
            a[i][chara]  = 1 + a[i-1][chara];
         else
            a[i][j]= a[i-1][j];

         }

    }

    int q; cin>>q;
    while(q--){
        int c;
        cin>>c;
        if(c == 1 ){
                int pos; cin>>pos;
                pos --;
                char ch; cin>>ch;
                int chnum = ch - 'a';
                int oldch =  st[pos] - 'a';
                st[pos] = ch;

                for(int i=pos; i < st.size();i++){
                    a[i][chnum] ++ ;
                    a[i][oldch]-- ;

                }

        }
        else
        {
            int l , r;
            cin>>l >>r;
            int ans = 0;
            l--,r--;

                for(int i=0;i<26;i++){
                if(l==0) ans += (a[r][i] > 0) ;
                else
                     ans += ( (a[r][i] - a[l-1][i] )  > 0);


            }



            cout<<ans<<endl;

        }




    }

    return 0;
}
