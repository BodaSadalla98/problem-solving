#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long  a[1001][1001];

int main()
{

    int n;cin>>n;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

    long long b,c;
     b = sqrt( a[2][1] * a[1][3] / a[2][3] );
    // c = sqrt( a[1][2] * a[2][3] / a[1][3] );
     cout<<b<<' ';


        for(int i=2;i<=n;i++){
              //  long long t = sqrt(a[2][i] * a[1][i]/ a[2][3]);
                cout<< a[1][i]/ b<<' ';

        }
    return 0;
}
