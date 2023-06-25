#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int tt;cin>>tt;
    while(tt--){
    int n; cin>>n;
    n/=6;
    if(n >1)
        n = sqrt(n);

    cout<<n<<endl;
    }

    return 0;
}
