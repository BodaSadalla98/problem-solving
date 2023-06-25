#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int sum = 0, can =0;
    int idx =-1;
    for(int i=0;i<n;i++){

        int t;cin>>t;
        sum+=t;
        if(t!=0)idx = i+1,can++;


    }

    if(can ==0 ){cout<<"NO";return 0;}

    cout<<"YES\n";

    if(sum != 0)cout<<"1\n1 "<<n;
    else
        cout<<"2\n"<<"1 "<<idx-1<<endl<<idx<<' '<<n;

    return 0;
}
