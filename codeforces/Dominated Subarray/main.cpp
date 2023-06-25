#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int a[200001];
int nxt[200001],last[200001];
int main()
{

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        memset(nxt, -1, sizeof nxt);
         memset(last, -1, sizeof last);
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=n-1;i>=0;i--){
                if(last[a[i]]==-1 ){
                    last[a[i]] = i;
                }
                else
                {
                    nxt[i] = last[a[i]];
                    last[a[i]] = i;

                }



        }

        int ans = 1e9;
        for(int i=0;i<n;i++){
            int temp ;

            if(nxt[i] != -1 ){
                ans = min (ans , nxt[i]-i+1 );


            }



        }


if(ans > n)ans= -1;


  cout <<ans << endl;

    }

    return 0;
}
