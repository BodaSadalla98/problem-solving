#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = n;
        for(int i=0;i<n-1;i++){

            if(v[i]!=v[i+1]){
                ans--;
                v[i+1] += v[i];
            }

        }
        cout<<ans<<endl;

    }
    cout << "Hello world!" << endl;
    return 0;
}

