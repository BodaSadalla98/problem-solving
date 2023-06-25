#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool can = 0;
        int a,b;
    int arr[200001];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n-1;i++){

        if(abs(arr[i]- arr[i+1])>1)can =1,a=i+1,b=i+2;
    }





        if(can)cout<<"Yes\n"<< a<<' '<<b<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
