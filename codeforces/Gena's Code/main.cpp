#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string ans ="";

int t,n;
cin>>n;

int numzeros=0;
for(int i=0;i<n;i++){
    cin>>t;


stringstream ss;
ss << t;
string str = ss.str();



int ones=0;
bool beutiful=1;
for(int j=0;j<str.size();j++){
    if(str[j]=='1')ones++;
    if(str[j]== '1' || str[j]=='0'|| ones <2)
        continue;
    else
    {
        beutiful=0;
        break;
    }

}


if(beutiful)numzeros+= log10(t);
else
    ans+=str;

}


for (int i=0;i<numzeros;++i)ans+='0';
    cout << ans << endl;
    return 0;
}
