#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int boards [10001];
        int sum = 0,n,m,d;
        cin>>n>>m>>d;
        for(int i=0;i<m;i++){
            int t;cin>>t;
            boards[i] = t;
            sum+=t;
        }

        vector<int>ans(n+1,0);


        int idx=0;
        int i=0;
        for(i;i<=n;i++){

            if(idx < m){
                for(int j=i+1;j<= i+d;j++){
                        if(sum < (n-j+1) &&  j != i+d )continue;
                        else
                        {
                            for(int k=j;k<boards[idx]+j;k++)
                                ans[k] = idx+1;
                            sum-=boards[idx];

                             i = j + boards[idx] -2 ;
                            idx++;
                            break;


                        }

                }


            }
            else
                {i--; break;}


        }

        if((i+1+d)>= (n+1)   ){
            cout<<"YES\n";
            for(int j = 1;j<=n;j++)
                cout<<ans[j]<<' ';

        }
        else cout<<"NO";


    return 0;
}
