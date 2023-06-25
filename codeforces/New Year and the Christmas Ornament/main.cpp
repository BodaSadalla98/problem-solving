#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,b,r;
    cin>>y>>b>>r;
    int mi= min(y,b);
    mi = min(mi,r);
    if(abs(y-r) <2)
    y-= 2- ( abs(y-r));
    if(abs(b-r) <1)
            b-= 1- ( abs(b-r));
    if(mi==r){
        cout<< 3*r - 3;

    }
    else if (mi==b){

        cout<<3*b;
    }
    else
    {
       cout<< 3*y +3;

    }
    return 0;
}
