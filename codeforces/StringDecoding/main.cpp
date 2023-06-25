#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
vector<char>v;
int dp(int index){

    if(index== s.size())return 0;
    int y=0;
    v.push_back(s[index]+64-48);
    int x=  1+ dp(index+1);
    if(index<s.size()-1){
    int t = (s[index]-48)*10 + s[index+1]-48;
    if(t<27)
        y= 1;
        v.push_back(t+64);
    }

    return x+y;





}
int main()
{
    cin>>s;
   // dp(0);

    cout << dp(0) << endl;
    for(auto i : v) cout<<i<<endl;
    return 0;
}
