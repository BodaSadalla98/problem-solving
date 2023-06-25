#include <iostream>

using namespace std;

int main()
{
int t;cin>>t;
while(t--){
    long long s,a,b,c;
cin>>s>>a>>b>>c;
long long ans=0;
while(! s%a)s--;
ans= s/c;
if(ans>=a)
{
int x= ans/a;
ans += (b*x);
}
cout<<ans<<endl;

}
    return 0;
}
