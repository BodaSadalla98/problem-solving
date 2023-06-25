#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
           bool can  =0;
           bool neg =0;
        int n;cin>>n;
        long long sum = 0;
        long long ma = -1e18;
        int first, last;
        vector<long long> v(n);
        for(int i=0;i<n;i++){

            long long  temp;cin>>temp;
            if(temp<0)neg=1;
            sum+= temp;

            if(i==n-1)last=temp;
            if(i==0)v[i] = temp,first=temp;
            else
                v[i] = v[i-1] + temp;


        }
        if(neg ==0)can =0;
        else if (first <0 || last <0)can =1;
                else{
        for(int i=0;i<n;i++){
        for(int j=i; j <n; j++){
                if(i==0 && j==n-1)continue;
            if(i ==0)ma = max(ma, v[j]);
            else
                ma = max(ma,v[j]-v[i]);

                if(ma >= sum){can=1;break;}
        }

        if(can==1)break;

        }

        }
     if(can)cout<<"NO\n";
    else
        cout<<"YES\n";

/**
int n; cin>>n;
bool can = 0, allzeros=1;
for(int i=0;i<n;i++){
    int te; cin>>te;
    if(te < 0 )can = 1;
    if(te != 0 )allzeros=0;
}

    if(can || allzeros)cout<<"NO\n";
    else
        cout<<"YES\n";


        **/
    }
    return 0;
}
