#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;

    cin>>t;
    while(t--){
        string s; set<char>v;
        cin>>s;

        int n = s.size();
        s[n] =' ';

        for(int i=0;i<n;i++){
            if(s[i] !=s[i+1])v.insert(s[i]);
            else
                i++;


        }
       // sort(v.begin(),v.end());
        for(auto i : v)
        cout << i;

        cout<<endl;
    }

    return 0;
}
