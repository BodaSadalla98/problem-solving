#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
    string s;

    while(n--){
    cin>>s;
    sort(s.begin(),s.end());

    if(s[0]== s[s.size()-1])
    cout << -1 <<'\n';
    else{
        swap(s[0],s[s.size()-1]);
        cout<<s<<'\n';

        }

    }
    return 0;
}
