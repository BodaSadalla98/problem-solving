#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool prime(long long n){
                for(int i=2;i*i <= n; i++)
                        if(n%i==0)return 0;

return 1;
}

int main()
{

    long long n;
    cin>>n;
   // set<long long>s;

    if(n==1){
        cout<<1;
        return 0;

    }

  //  if(prime(n)){
   //     cout<<n;
    //    return 0;
   // }

    long long  ans=0;

        for(long long  i=2;i*i <=n;i++){
            if(n%i ==0){
                  ans= __gcd(i,ans);
                    ans= __gcd(ans,n/i );
               // s.insert(i);
                //n/=i;
                //break;

            }


        }

    if(ans==0)ans =n;
   // for(auto i : s)
     //   ans= __gcd(i,ans);
    cout << ans << endl;
    return 0;
}
