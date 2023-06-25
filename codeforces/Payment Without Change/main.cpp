#include <iostream>

using namespace std;

int main()
{

    int q;cin>>q;
    while(q--){
        long long  sum,n,a,b;
        cin>>a>>b>>n>>sum;

        if(a*n > sum)
                sum -= (sum/n )* n;

            else
        sum -=     a*n;
        if(sum <= b)cout<<"YES\n";
        else
            cout<<"NO\n";


    }

    return 0;
}
