#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool vis[100];
int main()
{
   int ans=0; int arr[100];

    int n ; cin >>n;
    for(int i=0;i<n;i++)cin>>arr[i];


    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if(!vis[i]){
            ans++;

        }
        else
            continue;

    for(int j=i+1;j<n;j++){
        if(arr[j]%arr[i]==0)
            vis[j]=1;


    }
    }
    cout << ans;
    return 0;
}
