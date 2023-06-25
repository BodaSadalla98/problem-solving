#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,t1,t2,t3, t_stair,t_elev;
        cin>>x>>y>>z>>t1>>t2>>t3;

    t_stair = abs(x-y)*t1;
    t_elev = (3*t3)+ abs(x-z)*t2 + abs(x-y)*t2;

    t_elev <= t_stair ? cout<<"YES" : cout <<"NO" ;

    return 0;
}
