#include <iostream>

using namespace std;

int main()
{
    int t;
        int a,b,k;
cin>>t;
    while(t--){
        cin>>a>>b>>k;
        long long ans=0;
          ans =  (long long ) (k/2)    *    (a-b);
            if(k%2==1)ans+=a;
        cout<<ans <<'\n';



    }
    return 0;
}
