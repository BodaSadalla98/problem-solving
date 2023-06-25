#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;string s,s1="",s2="" ;
    cin>>n>>s;
    string ans="";
  // reverse(s.begin(),s.end());


   for(int i=0;i<s.size();++i){
    if(i%2==0)
      ans.append(1,s[i]) ;
    //s1+= s[i];
    else
    ans.insert(0,1,s[i]);
    //s2+=s[i];
   }


  reverse(s1.begin(),s1.end());
   //cout<<s2<<s1;
   cout<<ans;
    return 0;
}
