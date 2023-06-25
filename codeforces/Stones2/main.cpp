#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   string s;cin>>s;
   int counter=0;
   for(int i=0;i<s.size();++i)
   {
       if(s[i]==s[i+1])counter++;
   }
   cout<<counter;
    return 0;
}
