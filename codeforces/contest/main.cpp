#include <iostream>

using namespace std;
int main()
{
    int n,k;
cin>>n>>k;
int arr[n];
bool solved[n];
for(int i=0;i<n;i++)cin>>arr[i];
for(auto i: solved)i=0;

int cnt=0;
for(int i=0;i<n;i++){
 if(solved[i]==0&&arr[i]<=k){
    cnt++;
solved[i]=1;
}
if(arr[i]>k)break;
}
for(int i=n-1;i>=0;i--){
 if(solved[i]==0&&arr[i]<=k){
    cnt++;
solved[i]=1;
}
if(arr[i]>k)break;
}
//sss
cout<<cnt;
    return 0;
}
