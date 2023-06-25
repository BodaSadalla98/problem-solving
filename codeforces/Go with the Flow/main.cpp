#include <iostream>

using namespace std;
double arr[100001];
int main()
{
    int  t;
cin>>t;
arr[0]=1;
for (int i=1;i<=t;i++)arr[i] = i* arr[i-1];
double ans=0;
 for (int i=0;i<=t;i++)

    ans += ( (double)1.0/ arr[i]);


cout.fixed;
cout.precision(13);

cout<<ans;
    return 0;
}
