#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<long long >shops;
int main()
{
    long long  n,T, sum=0 ,ans=0;
cin>>n>>T;
shops.resize(n);
long long cnt=0;
        for(long long  i=0; i<n;i++){cin>>shops[i];
        if(shops[i]<=T){sum+=shops[i];cnt++;}
}
 long long Temp;
while (T>0 ){
    Temp= T;cnt=0;
for(int i=0; i<n && T>0 ;i++){


        if(shops[i]<= Temp){
            Temp-= shops[i];
            cnt++;
}
}
    if(cnt==0)break;
    Temp= T-Temp;

long long cycles = T/Temp;
    ans +=  (cycles)*cnt ;
    T-=  Temp* cycles ;



}

cout<<ans;
    return 0;
}
