#include <iostream>
#include"bits/stdc++.h"
using namespace std;
int a[1002];
long long csum[10001];
int main()
{

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    csum[0]=0;
    int tt;cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        for(int i=1;i<=n;++i){
            cin>>a[i];
                csum[i] = csum[i-1] + a[i];
        }

        bool can = 0;
        for(int i=1;i<n;i++)
        if(a[i]==a[i+1]){
            can=1;
            break;
        }
        if(!can){
        for(int i=1;i<=n;++i)
        {
            for(int j=i+1;j<=n;++j)
            {
                if ( (csum[j] - csum[i]) == (long long)  ((j-i)*(j-i-1)/2 ) ){
                    can = 1;
                    break;
                }

            }

             if(can)
                    break;



        }
        }


        if(can)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}
