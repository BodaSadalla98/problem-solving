#include <iostream>

using namespace std;

int main()
{
   int t;
cin>>t;
int L,v,l,r;
while(t--){
cin>>L>>v>>l>>r;
int ans= L/v;





if(l%v==0||r%v==0)ans--;
if( r!=l&& (r-l)%v > v/2&&v<L){

        ans--;
}

ans-= (r-l)/v;




cout<<ans<<endl ;

}
    return 0;
}
