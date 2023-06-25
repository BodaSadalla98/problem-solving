#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int a,n,b,c;



int main()
{

    int t;cin>>t;
    while(t--){
        cin>>n>>a>>b>>c;
        string s; cin>>s;
        int A=0,B=0,C=0;
        for(int i=0;i<s.size();i++){
                if(s[i]=='R')A++;
                else if (s[i]=='P')B++;

                else
                    C++;
        }
        vector<char>v(n, 'x');
        int ans =0;
        ans = min(A,b) + min(B,c) + min (C,a);

        if (ans >= ( (n+1) /2 ) ) {
                cout<<"YES\n";


            for(int i=0;i<n;i++){
                if(s[i]== 'R')
                {
                    if(b >0)b--, v[i] = 'P';


                }
                else if(s[i]== 'P')
                {
                    if(c >0)c--, v[i]= 'S' ;

                }
                else if(s[i]== 'S')
                {
                    if(a >0)a--,v[i]='R';


                }
            }


                for(int i =0;i<n;i++){
                    if(v[i]== 'x'){
                        if(a-->0)v[i]='R';
                        else if(b-->0)v[i]='P';
                        else
                            v[i]='S';





                    }
                }









            for(auto i : v)cout<<i;
            cout<<endl;


        }
        else
            cout<<"NO\n";



    }

    return 0;
}
