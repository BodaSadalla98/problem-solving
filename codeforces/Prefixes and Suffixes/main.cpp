#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int  dup[100];
int main()
{
    string arr[2];
    int in=0;
    int n; string  str1="",str2="";
    cin>>n;
    string s;
    for(int i=0;i< (2*n-2);i++){
        cin>>s;
        if (s.size()== (n-1)){
            arr[in++]= s;
            v.push_back(s);
        }
        else{
            v.push_back(s);

        }


    }
    string ans1="", ans2="";
    str1 += arr[1][0] + arr[0];
    str2 += arr[0] + arr[1][n-2];
bool a=0,b=0,c=0,d=0;
bool alter1=0, alter2=0;
        for (int i=0; i<v.size();++i){
            int siz = v[i].size();
               a=b=c=d=0;
            string s1pre, s1suf,s2pre,s2suf;

            s1pre= str1.substr(0,siz);
            s2pre = str2.substr(0,siz);
            s1suf= str1.substr((n-siz));
            s2suf= str2.substr((n-siz));

        if (s1pre ==  v[i] )a=1;
        if (s1suf == v[i])b=1;
        if (s2pre ==  v[i] ) c=1;
        if (s2suf == v[i])d=1;

            if(a || b){
                if(a&&b){
                    if(dup[siz] == 0) { ans1+="P" ; dup[siz] = 1;}
                      else{
                            ans1+="S";}
                }
                else if (a) ans1+="P" ;
                else
                     ans1+="S";

            }
            if(c || d){
                if(c&&d){
                    if(dup[siz] == 0) { ans2+="P" ; dup[siz]=1;}
                      else{
                            ans2+="S"; }
                }
                else if (c) ans2+="P" ;
                else
                     ans2+="S";
            }
        }

        int P=0, S=0;
for (int i=0;i<ans1.size();++i){
    if(ans1[i]== 'P')P++;
    else
        S++;
}
        if (ans1.size()==(2*n-2) && P== S)cout<<ans1;

        else
            cout<<ans2;


    return 0;
}
