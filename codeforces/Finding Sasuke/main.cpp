#include <iostream>
#include"bits/stdc++.h"
using namespace std;


/**
 a= -3  5   -4 6  -3 -2
    5   -3   6  4  -2  3

**/
int main()
{

    int tt;cin>>tt;
    while(tt--){
        int n;cin>>n;
        int v[101];
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        vector<int> ans;
        for(int i=0;i<n;i+=2){
                if((v[i]>0 && v[i+1]>0) || v[i]<0 && v[i+1] < 0){
                        ans.push_back(-v[i+1]);
                        ans.push_back(v[i]);
                }
                else
                {
                    if(v[i]<0)
                        v[i]*=-1;
                    else
                        v[i+1]*=-1;
                        ans.push_back(v[i+1]);
                        ans.push_back(v[i]);

                }



        }

        for(auto i : ans)
            cout<<i<<' ';

        cout<<endl;


    }

    return 0;
}
