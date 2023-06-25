#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int a[200002];

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int ma = a[n-1];
    int gcd = 0;
    long long  sum = 0;
    for(int i=0;i<n;i++){
            sum += ma - a[i];
        gcd = __gcd(gcd,ma-a[i]);
    }


    cout << sum/gcd <<' '<< gcd << endl;
    return 0;
}
