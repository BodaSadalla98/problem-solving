#include <iostream>

using namespace std;

int main()
{
   int tt;cin>>tt;
   while(tt--){
        int a,b;
        cin>>a>>b;
        double d = (b+1)/2.0;
        if(a < d)
            cout<<"NO\n";
        else
            cout<<"YES\n";


   }
    return 0;
}
