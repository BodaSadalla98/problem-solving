#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<string>ans;
int cnt[26];
vector< vector<string> > v(26);
int main()
{
    bool can = 1;
    string s;cin>>s;
    int n ; cin>>n;
    for(int i=0;i<n; i++){
            string t;
        cin>>t;
        v[ t[0]-'A'].push_back(t);


    }

    for(int i=0;i<26;i++){
        sort(v[i].begin(), v[i].end());

    }

    for(int i=0;i<s.size();i++){

        int temp = s[i] - 'A';

        if(cnt [temp] < v[temp].size()){
                ans.push_back( v[temp][ cnt[temp] ] );
                cnt[temp]++;

        }
        else
        {
            can = 0;
            break;

        }



    }


    if(can){

            for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';

    }
    else
    {

        cout<<"Impossible";
    }


    return 0;
}
