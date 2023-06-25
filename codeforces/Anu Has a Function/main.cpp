#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
            int n, a[100001];
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>a[i];



            }
            sort(a,a+n);
            for(int i=n-1;i>=0;i--)cout<<a[i]<<' ';

    return 0;
}
