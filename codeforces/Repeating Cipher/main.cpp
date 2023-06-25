#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
   string s;
   cin>>s;

//  s+='0';
   int cnt=2;
   string ans="";
   //ans+= s[0];
   for(int i=0;i<n;i+=cnt++){
   // if(s[i]!= s[i+1])ans+=s[i];
    ans+=s[i];
   }

   cout<<ans;
    return 0;
}
