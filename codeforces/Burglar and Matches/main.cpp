#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int >> p ;
long long ans =0;

int main()
{
    int n,m; cin>>n>>m;
    p.resize(m);
    for (int i=0;i<m;++i){
        cin>>p[i].first>>p[i].second;

    }

    sort(p.begin(), p.end(), [](const pair<int, int > &a , const pair<int, int >&b ) { return a.second > b.second ;});
    for (int i=0;i<m;++i){
        if (n>= p[i].first){
            n-= p[i].first;
            ans += p[i].second * p[i].first;

        }
        else{

          //  n-= p[i].first;
            ans += p[i].second * n;
            break;
        }



    }


            cout <<ans ;
    return 0;
}
