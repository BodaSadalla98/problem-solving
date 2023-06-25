#include <iostream>

using namespace std;

int n,ans=0;

int main()
{
    cin >>n;

if(n & 1){ans=(2*(n/2))+(n/2 + 1);}

    else
        ans=(3*(n/2));


cout<<ans<<endl;
    for(int i=2;i<=n;i+=2)cout<<i<<' ';
    for(int i=1;i<=n;i+=2)cout<<i<<' ';
    for(int i=2;i<=n;i+=2)cout<<i<<' ';















    return 0;
}
