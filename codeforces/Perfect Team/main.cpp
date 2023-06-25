#include <iostream>

using namespace std;

int main()
{

    int q;  cin>>q;
    while(q--){
        long long  ans =0,a,b,c;

        cin>>a>>b>>c;

        long long  d = min(a , min(b,c));

        if(d == c){
            ans+= c;
            a-=c; b-=c;

            ans+= min (a,min (b, (a+b) /3));



        }

        else
        {
            ans += d;

        }

        cout << ans << endl;
    }

    return 0;
}
