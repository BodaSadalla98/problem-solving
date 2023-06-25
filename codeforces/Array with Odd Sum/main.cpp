#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; bool odd=0, even=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int te;
            cin>>te;
            if(te%2==0)even=1;
            else
                odd=1;

        }
        if( (odd &&even) || (!even && n%2) )cout<<"YES\n";
        else
            cout<<"NO\n";



    }

    return 0;
}
