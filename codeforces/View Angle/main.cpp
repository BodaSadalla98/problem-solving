#include <iostream>
#include<bits/stdc++.h>
using namespace std;
double angles[100001];
int main()
{
    int n;cin>>n;
    double pi = acos(-1);
    for(int i=0;i<n;i++){
        double x,y; cin>>x>>y;
        angles[i] =    atan2(y,x) * 180/pi  ;
        if(angles[i]<0)angles[i]+=360;
    }
double ma =0;
sort(angles, angles+n);
angles[n] = angles[0];
    for(int i=0;i<n;i++){
        double an = angles[i+1] - angles[i];
        if(an<0)an+=360;
        if(an > ma)ma = an;

    }
cout.precision(10);
if(ma == 0)ma = 360;
    cout<<360- ma;
    return 0;
}
