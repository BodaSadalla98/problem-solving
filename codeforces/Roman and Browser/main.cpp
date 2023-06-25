#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
    int sum=-1e9,total=0,n,k, pos=0,neg=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
            int t;
            cin>>t;
            arr[i]=t;
            total+=t;

    }
    for(int i=1;i<=n;i++){
        int temp=0;
        for(int j=i+k;j<=n;j+=k)temp+=arr[j];
        for(int j=i;j>=1;j-=k)temp+=arr[j];


        temp = abs(total - temp);
        sum = max(sum, temp);
    }




cout<<sum;

    return 0;
}
