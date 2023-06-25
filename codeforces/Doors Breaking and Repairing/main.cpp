#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,t,ans=0;
    cin>>n>>x>>y;
    for(int i=0l;i<n;i++){
        cin>>t;
        if(t<=x)ans++;

    }


    if(x>y)cout<<n;
    else
        cout<< ceil( (double)ans/2);

    return 0;
}
