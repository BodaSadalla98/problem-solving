#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long cnt=0;
int main()
{   cin.tie(0);
    cout.tie(0);
    ios_base ::sync_with_stdio (false);
    long long ans=0;
    long long n,m;
    cin>>n>>m;
    if(m==1){
    cout << n*n;
    return 0;
    }


    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;++j){
                cnt++;
                long long temp1,temp2 ;
            temp1= (i*i)%m;
            temp2 = (j*j)%m;
            if ((temp1+ temp2)%m == 0){
                    ans+=2;
                if(i==j)ans--;
            }



        }


    }

    cout<<ans;

    return 0;
}
