#include <iostream>

using namespace std;
long long q,a,b,n,ans;
int main()
{
   cin>>q;
   while(q--){
        ans=0;
    cin>>n>>a>>b;
    if(a*2 < b)
    ans = a*n;
   else
   {
       ans= (n/2)*b;
       if(n%2!=0 )ans+=a;

   }

    cout<<ans<<"\n";
   }
    return 0;
}
