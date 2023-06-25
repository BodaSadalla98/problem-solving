#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
  string s;
  cin>>s;
  int un=0,r=0,l=0,u=0,d=0;
  for(int j=0;j<s.size();j++){
    if(s[j]=='?')un++;
    else if(s[j]=='R')r++;
    else if (s[j]=='L')l++;
    else if (s[j]=='U')u++;
    else
        d++;


}
int  minx=r-(un+l);
int maxx=r+un-l;
int miny=u-(un+d);
int maxy=u+un-d;
cout<<minx<<' '<<miny<<' '<<maxx<<' '<<maxy;
cout<<endl;
}

    return 0;
}
