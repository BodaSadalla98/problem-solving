#include <iostream>
#include<algorithm>
using namespace std;

int main()
{int n;
cin>>n;
long long  a[1001],b[1001];
for( int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
sort(b,b+n);
long long ans=0;
for(int i = n-1;i>=0;i--)ans+=a[i]*b[i];

cout<<ans;
    return 0;
}
