#include <iostream>
#include<bits/stdc++.h>
using namespace std;
set<char> se;

int main()
{
    bool can=1;

    se.insert('a');se.insert('e');se.insert('i');se.insert('o');se.insert('u');
    for(int j=1;j<=3;j++){
   string s; getline(cin, s);
   int cnt=0;
   for(int i=0;i<s.size();i++){
        if(se.find(s[i])!= se.end())cnt++;

   }
   if(( (j==1 || j==3) && cnt != 5)  || (j==2 && (cnt !=7) ))can=0;

   }


   if(can)cout<<"YES";
   else
    cout<<"NO";
    return 0;
}
