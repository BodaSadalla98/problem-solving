#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int freq[100001];
set<int> s;
int main()
{
    cin.tie(0);cout.tie(0);
    int cnt=0;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int t;cin>>t;
        freq[t]++;
        s.insert(t);

        if(s.size()==n){
            s.clear();
            cnt++;
            for(int j=1;j<=n;j++){
                if(freq[j]>cnt)s.insert(j);
            }





            cout<<1;
        }
        else
            cout<<0;



    }

    return 0;
}
