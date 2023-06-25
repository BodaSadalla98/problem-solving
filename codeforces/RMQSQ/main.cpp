#include <iostream>
#include"bits/stdc++.h"
using namespace std;
int n,q;
int mx[100001][18];
int main()
{
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
        mx[i][0] = v[i];
    }
    for(int k=1;k<18;++k)
    for(int i=0;i<n;++i){
        if(mx[i][k-1] == -1 || i+(1<<k-1)>n )continue;

        mx[i][k] = min(mx[i][k-1], mx[i+ (1<<(k-1) )][k-1]);

    }
    int a,b;
    cin>>q;
    while(q--){
        cin>>a>>b;
        if(a> b)swap(a,b);
        int r = b-a+1;
        int log=0;
        while((1<<log) <= r)
            log++;
        --log;
        int ans = 1e9;
        for(int k=17;k>=0;k--)
        {
            if(r >= (1<<k)){
                ans = min(ans, mx[a][k]);
                r-= 1<<k;
                a += 1<<k;
            }
        }
        cout<<ans<<endl;


       // cout<<min(mx[a][log], mx[b- (1<<log)+1][log])<<endl;



    }

    return 0;
}
