#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int q;cin>>q;
    while(q--){

             vector<string> v;
        string s;cin>>s;
        int n  = s.size();
        int last = s[0]-'0';
        string temp = "";
        temp += s[0];
        for(int i=1;i<n;i++){
                int cur = s[i] - '0';
            if(cur %2 ==  last %2)
                temp+= s[i];
            else
            {
                v.push_back(temp);
                temp = s[i];
                if(i == n-1)v.push_back(temp);


            }
            last  = s[i] - '0' ;
        }

        sort(v.begin(),v.end());

        for( auto i : v)
            cout<<i;

        cout<<endl;

    }
    return 0;
}
