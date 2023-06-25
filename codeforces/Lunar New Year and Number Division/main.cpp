#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long ans=0;
int n, arr[400001];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr, arr+n);
    for(int i=0;i<n/2;i++)
    {
        ans += (arr[i]+arr[n-i-1])*(arr[i]+arr[n-i-1]);

    }
    cout<<ans;

    return 0;
}
