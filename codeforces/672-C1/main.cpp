#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int tt;cin>>tt;
    while(tt--){

        int n,q;cin>>n>>q;
        assert(q==0);
        vector<int> a (n);
        for(int i=0;i<n;i++)cin>>a[i];

        int maxi = INT_MIN;
        int sign =1;
        int cur = 0;
        for(int i=0;i<n;i++){
            cur += (sign * a[i]);
            sign *= -1 ;

            if(cur < 0){
                cur=0;
                --i;
            }
            maxi = max(maxi,cur);

        }

        cout<<maxi<<endl;




    }

    return 0;
}
