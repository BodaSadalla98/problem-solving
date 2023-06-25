#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
            bool can =1;
        int n;cin>>n;
        int max_c = 0, max_p =0;
        for(int i=0;i<n;i++){
            int c,p;
            cin>>p>>c;
            if(c - max_c > p - max_p)can=0;
            if(c > p || p < max_p || c < max_c )can = 0;

            max_c = max(max_c , c);
            max_p = max(max_p , p);



        }
    if(can)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    }
    return 0;
}
