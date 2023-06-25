#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string ans ="";

int t,n;
cin>>n;
bool haszero=0;
int numzeros=0;
bool allgood=1;
for(int i=0;i<n;i++){



string str;
cin>>str;
if(str=="0")haszero=1;
string zeros="";
int ones=0;
bool beutiful=1;
for(int j=0;j<str.size();j++){
    if(str[j]=='1')ones++;
    else if (str[j]=='0')zeros+='0';
    if((str[j]!= '1' && str[j]!='0')|| ones >1)
    {
        beutiful=0;
        allgood=0;

    }

}


if(beutiful)numzeros+= zeros.size();
else
    ans+=str;

}


for (int i=0;i<numzeros;++i)ans+='0';

if(haszero)cout<<0;
else{
if(allgood)cout<<'1';

    cout << ans << endl;
    }
    return 0;
}
