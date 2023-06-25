#include <iostream>

#include<bits/stdc++.h>

using namespace std;
int a[101];
int main()
{
    int q; cin>>q;
    while(q--){
        int pos[101];

        int n;cin>>n;
        int swaps = n-1;
        for(int i=0;i<n;i++){
            int t;cin>>t;
            pos[t] = i;
            a[i] = t;

        }

        set<pair<int,int>>s;

        for(int i=1;i<=n;i++){
            for(int j=0;j<n;j++){
                if(a[j]==i){
                    for(int k=j;k>0 && swaps && a[k] < a[k-1] ;k--){
                        if(s.find({k,k-1}) == s.end()){

                            s.insert({k,k-1});
                            swap(a[k],a[k-1]);
                            swaps--;

                        }
                        else
                            break;



                    }


                }

            }


        }


                   for(int i=0; i < n; i++)cout<<a[i]<<' ';

                    cout<<endl;

    }


    return 0;
}
