#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
            cin>>v[i].first;
             v[i].second = i+1;}

    sort(v.rbegin(),v.rend());

    int ans = 0;
    for(int i=0;i<n;i++)ans +=   1 + ( (i ) * v[i].first);

    cout << ans<< endl;
     for(int i=0;i<n;i++)cout<< v[i].second<

        <' ';
    return 0;
}
