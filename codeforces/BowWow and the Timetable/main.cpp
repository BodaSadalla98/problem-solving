#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ones = 0, ans =0;
    string s; cin >>s;
    for(int i=0;i<s.size();i++)if(s[i]=='1')ones++;

    int m = s.size()-1;
    ans = ceil((double)m/2);
    if(ones>1 && m%2 ==0)ans++;
    cout << ans<< endl;
    return 0;
}
