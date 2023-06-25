#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
bool is=1;
int ctr=0;
string names[5]={"Danil", "Olya", "Slava", "Ann" , "Nikita"};
int main()
{
    size_t it;
   cin>>s;
   for(int i=0;i<5;i++){
        it=s.find(names[i]);
    if(  it!=string::npos ){
            is=1;
            for(int j=0;j<names[i].size();j++){
               if(names[i][j]!=s[it+j])is=0;

            }


         if(is)
        ctr++;

        }
        size_t it2=s.find(names[i],it+names[i].size());
        if(  it2!=string::npos ){
                is=1;
        for(int j=0;j<names[i].size();j++){
               if(names[i][j]!=s[it+j])is=0;

            }


         if(is)
        ctr++;

    }


   }


   if(ctr==1)cout<<"YES";
   else
    cout<<"NO";
    return 0;
}
