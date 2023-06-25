#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        long long  n; bool odd=0, even=0;
        cin>>n;
        long long  ans=0;
        while(n>9){
                int amount = n/10;
            n = n - amount*10 ;
            ans += amount * 10;
            n+=amount;

        }
        ans+=n;
        cout<<ans<<endl;



    }

    return 0;
}
