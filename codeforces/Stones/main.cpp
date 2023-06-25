#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int ans=0,ans2=0,a,b,c;
            cin>>a>>b>>c;
/**
        if(b<= c){
            int temp = c / 2;
            if(b>=temp){
            ans += 3 * temp;
            b -=temp;
            }

                if(b>1)
                ans+= 3 * (min (a, (b/2 ) ));

        }
        else
        {
            int temp = b / 2;
            if(a>=temp){
            ans +=  3 * min (temp, a);
            b -= 2*temp;
            }

            if(b >= 1){
                ans +=3*  min(b,c/2);
            }


        }

**/

    int te = c/2;
    ans+=  min (te,b);
    b-= te;
    if(b>1)
ans += min (a , b/2);

        cout<< 3* ans<<endl;

    }


    return 0;
}
