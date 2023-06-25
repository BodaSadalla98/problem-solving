#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int ans=0;
    string s="";
    string sos="";
int finalPos=0,qMarks=0;


void solve(int index, int pos ){
            if(index==n){
                if(pos==finalPos)ans++;
              return;
            }

            if(sos[index]=='+'){
                    solve(index+1,pos+1);

            }
            else if (sos[index]=='-') solve(index+1,pos-1);
                else

            {
                 solve(index+1,pos+1);
                solve(index+1,pos-1);
            }

}
int main()
{
   cin>>s>>sos;
    n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='+')finalPos++;
        else
            finalPos--;

    }





    for(int i=0;i<n;i++){
        if(sos[i]=='?')qMarks++;

    }

    solve(0,0);


    cout.precision(15);
    if(qMarks==0 && ans==1)cout<<1;
        else

    cout<< (double) ans/ pow(2,qMarks);
    return 0;
}
