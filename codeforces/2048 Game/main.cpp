#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int q; cin>>q;
    while(q--){




        int n;
        cin>>n;
      int a[2059];


        memset(a, 0, sizeof a);
        for(int i=0;i<n;i++){
              int t;cin>>t;

              if(t> 2048)continue;
                a[t]++;



        }



        for(int  i =1 ; i<2048; i*=2){
             a [2*i] += a[i] / 2;



        }




        if(a[2048] >= 1  )cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}
