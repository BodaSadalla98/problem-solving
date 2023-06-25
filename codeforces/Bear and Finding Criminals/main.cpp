#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int >v;
int main()
{

    int cnt=0,n,home;
    cin>>n>>home;
    home--;
    v.resize(n);
    for(int i=0;i<n;++i)cin>>v[i];

    if(v[home])cnt++;

    for (int i=1;i<n;i++){
            int r = home + i;
            int l = home - i;

        if (r<n && l > -1 && v[l] && v[r])cnt+=2;
        else if (r<n && v[r] && l<0) cnt++;
        else if (l>-1 && v[l] &&r>=n)cnt++;


    }
    cout << cnt << endl;
    return 0;
}
