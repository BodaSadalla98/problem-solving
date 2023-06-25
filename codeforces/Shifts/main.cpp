#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int n,h;
int c[21],d[21];

int calc(int idx, long long  a, long long  b ){
            if(idx ==n){
                return (a>=h && b>=h);

            }

         //   int x,y,x;
         //   x = y = z = 0;

           return  calc(idx+1, a+ c[idx], b + d[idx]) + calc(idx+1, a+ c[idx], b ) + calc(idx+1, a, b + d[idx]) ;





}
int main()
{
    int t; cin>>t;
     for(int i=1; i<=t; i++){
        cin>>n>>h;
        for(int j=0;j<n;j++)cin>>c[j];
        for(int j=0;j<n;j++)cin>>d[j];



        printf("Case #%d: %d\n",i,calc(0,0,0));
     }


     //cout<<INT_MAX;

    return 0;
}
