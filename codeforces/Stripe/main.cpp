#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int ans;
int main()
{
    int n;
cin>>n;
for(int i =0;i<n;i++){
int temp;
cin>>temp;
if(i==0)arr[i]=temp;

arr[i]=temp+arr[i-1];

}

for (int i=0;i<n-1;i++){

if( (arr[n-1]/2) ==arr[i]&& arr[n-1]%2==0)ans++;

}


cout<<ans;
    return 0;
}
