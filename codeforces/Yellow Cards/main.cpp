#include <iostream>

using namespace std;

int main()
{
    int a,b,k1,k2,n;
    cin>>a>>b>>k1>>k2>>n;
    int mi=0,ma=0;
    int m =n;
    if(k1 > k2){
            if(n>= b*k2)
            {ma+=b;
                n -= (b*k2);
                ma += n/k1;
            }
            else{
                ma += n/k2;
            }

            m -= (k1-1)*a;
            m -= (k2-1)*b;

            if(m>0)mi += m;


    }

    else
    {

        if(n>= a*k1)
            {ma+=a;
                n -= (a*k1);
                ma += n/k2;
            }
            else{
                ma += n/k1;
            }

            m -= (k1-1)*a;
            m -= (k2-1)*b;

            if(m>0)mi += m;


    }
    cout << mi<<' '<<ma;
    return 0;
}
