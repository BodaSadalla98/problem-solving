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

        for(int i=1;i<=n;i++){
            if(swaps > 0){

                    int oldPos = pos[i];
                pos[i] = max(pos[i]- swaps , i-1);
                swaps -=  oldPos- pos[i];
                for(int j=1;j<=n;j++){
                    if(i==j)continue;

                    if(pos[j] < oldPos && pos[j] >= pos[i] )pos[j]++;


                }


            }


        }

                   vector<int>ans;
                   for(int i=0;i<n;i++){
                            for(int j=1;j<=n;j++)
                                    if(pos[j]==i)ans.push_back(j);

                   }



                   for(auto i:ans)cout<<i<<' ';

                    cout<<endl;

    }


    return 0;
}
