#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 string s ;
 cin>>s;
 int nor=0;
 for(int i =0;i<s.size();i++)
{
   if(i==0){
    nor+=min ( (26- abs(s[i]-'a'))%26,(abs(s[i]-'a'))%26);
   }
   else
   {



    nor+=min ( (26-abs(s[i]-s[i-1])),(abs(s[i]-s[i-1])));
   //nor+=abs(s[i]-s[i-1]-26);
   }



}
cout<<nor;

    return 0;
}
