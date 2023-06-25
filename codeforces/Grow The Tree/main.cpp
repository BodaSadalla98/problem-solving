#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int>v;
int main()
{


    int n;cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    long long  sumx =0, sumy=0;
    for(int i=0;i<n;i++){
        if(i< (n/2) )sumy+=v[i];
        else
            sumx+=v[i];



    }

    cout << sumx*sumx + sumy*sumy ;
    return 0;
}
