#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
cin>>n>>k;
string s;
cin>>s;
vector<vector<int>>v;
bool a[s.length()];
for(auto i: a)i=0;
v.resize(26);
char c;
for(int i=0;i<n;i++){

c=s[i];


v[c-97].push_back(i);


}

for(int i=0;i<26;i++){
  for(int j=0;j<v[i].size();j++){
    if(k==0)break;
 a[v[i][j]]=1;
k--;

}

}
for(int i=0;i<s.length();i++){

    if(a[i]==0)cout<<s[i];
}


    return 0;
}
