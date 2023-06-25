#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string x = "";
    int n,ans = 0;
    string s;cin>>n>>s;
    int a=0,b=0;
    for(int i=0;i<n; i+=2){
        if (s[i] == s[i+1]){ans++;
            x+="ab";


        }
        else{
            x+= s[i] ;
                x+=  s[i+1];
        }






    }

    cout <<ans<< endl;


    if(ans==0)cout<<s;

   else  {
            cout<<x;


    }

    return 0;
}
