#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int ans = 1e9;
    int arr[101];
int dp(int index){
    if(index==n-1){

        for(int i=1;i<n-1;++i){
            if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)return 1e9;


        }
        return 0;
    }
                int a=1e9,b=1e9;
                for(int i=index;i<n-1;i++){
            if(arr[i]==0 && arr[i-1]==1&& arr[i+1]==1){
                    arr[i-1]=0;
               a= 1+ dp (i+1);
               arr[i-1]=1;

               arr[i+1]=0;
               b= 1+ dp(i+1);
               arr[i+1]=1;
               ans=     min(ans,b);
                ans= min (ans, a);



            }
                dp(index+1);

                }

}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

        dp(1);
        cout<<ans;

    return 0;
}
