#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numofsnow=0,numofcanes=0;
    int n; string s;
    cin>>s>>n;
    string ans="";
    for(auto i : s){ if (i =='?')numofcanes++;
        else if (i=='*')numofsnow++;

    }

   // cerr<<s.size();

    int realsize= s.size()-( numofcanes +numofsnow) ;
        if( (numofsnow==0 && realsize < n)  || ( realsize> n) && numofcanes+ numofsnow < (realsize - n) )
            cout << "Impossible" ;




    else
    {

        int k = abs(n-realsize);
        if(n>realsize){
        for(int i=0;i<s.size();i++){
            if(s[i]=='*' && k >0){
                while(k--)            {
                    ans+=s[i-1];

                }


            }

            else if (s[i]!='?' && s[i]!='*')ans+=s[i];



        }
    }


        else{
               bool flag=1;

                for(int i=0;i<s.size();i++){
                        if(flag&& s[i]!= '*' && s[i]!= '?')ans+=s[i];



                    if(k>0 && (s[i]== '*' || s[i]== '?'))k--,flag=0;
                    if(!flag)ans.erase(ans.size()-1  ,1);
                    flag=1;



                }

        }



        cout <<ans;
    }
    return 0;
}
