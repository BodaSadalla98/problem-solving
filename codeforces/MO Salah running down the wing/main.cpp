#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,x,y,t;


  freopen("mosalah.in", "r", stdin);

    cin>>t;
    while(t--){
            int ans ;
                cin>>n>>m>>x>>y;
                x+=y;
                double avgsofar = m / x;

              //  if(x==0)avgsofar =0;

                if(avgsofar >= n || n == 0)ans = 0;
                else if (avgsofar < n && y ==0)ans =-1;
                else
                    ans =( (x ) * n ) - m;


                cout<<ans<<endl;



    }

    return 0;
}
