#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100001];

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr, arr+n);

    int a,b;
    a= arr[n-1]- arr[1];
    b= arr[n-2] - arr[0];

    if(a> b) cout<<b;
    else
        cout<<a;

    return 0;
}
