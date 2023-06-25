#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string s,p,t;

int main()
{
    int w;
cin>>w;
    while(w--){
            bool ok=1;
            int arr[26]={0};
            cin>>s>>t>>p;

    for(int i=0;i<p.size();i++)arr[p[i]-97]++;
        int ptr=0;

        for(int i=0;i<t.size();i++){
            if(t[i]==s[ptr])ptr++;
            else if(arr[t[i]-97]>0)arr[t[i]-97]--;


            else{
                    ok=0;
              //  cout<<"NO";
                break;
            }
        }

        if(ok && ptr == s.size())cout<<"YES";
        else
            cout<<"NO";

        cout<<endl;


    }

    return 0;
}
