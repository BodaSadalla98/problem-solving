#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   bool e=0;
   while(1){
        e=0;
   if(s.size()<2)break;
    for(int i=0;i<s.size()-1;i++){
 if(s.size()<2)break;
        if(s[i]=='S'&&s[i+1]=='T'){s.erase(i,2);e=1;i=-1;}

    }
    if(e==0)break;











   }
   cout<<s.size();
    return 0;
}
