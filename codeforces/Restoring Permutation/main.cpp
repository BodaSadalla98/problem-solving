#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t; cin>>t;
    while(t--){
            bool can = 1;
        int n; cin>>n;
        vector<bool> vis(2*n+1);
        for (int i=0;i<=2*n;i++)vis[i]=0;
        vector<int> ans(2*n + 1 );
        for(int i=1;i<=n;i++){

            int te;cin>>te;
            ans[ 2*i -1] = te;
            vis[te]=1;
        }
        for(int i=2; i <=2*n;i+=2){
            bool c= 0;
            for(int j = ans[i-1]+1; j<=2*n;j++){
                if(!vis[j]){
                    ans[i] = j;
                    vis[j]=1;
                    c=1;
                    break;

                }
            }

                if(!c){
                    can = 0;
                    break;
                }




        }



    if(can){
        for(int i =1;i<=2*n;i++)printf("%d ",ans[i]);


    }
    else
        cout<<-1;

    cout<<endl;
    }
    return 0;

}
