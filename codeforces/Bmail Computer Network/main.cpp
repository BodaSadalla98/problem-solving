#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int n;
cin>>n;
int arr[200002];
for(int i=2;i<n+1;i++)cin>>arr[i];

arr[1]=0;
vector<int>ans;
ans.push_back(n);
while(1)
{
if(n==1)break;
ans.push_back(arr[n]);
n=arr[n];
}

for(int i=ans.size()-1;i>-1;i--)cout<<ans[i]<<' ' ;
    return 0;
}
