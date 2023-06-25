#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int a[101];
int main()
{

    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        sort(a,a+n);
         bool flag = 0;
         for(int i=0;i<n-1;i++){
             if(a[i]+1 == a[i+1])flag=1;
         }


        if(flag)cout<<2<<endl;
        else
            cout<<1<<endl;

    }

    return 0;
}
