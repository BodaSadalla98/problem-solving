#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
char c,cc;
char fc;bool b=0;
string s,ans= "" ;
cin>>s;

    for(int i=0;i<n;i++){
                c= s[i];
    if(i==0) fc=c;
    if(fc != c ){

ans+=fc;ans+=c;
cout<<"YES\n"<<ans;
return 0;
}




}

    cout<<"NO";
    return 0;
}
