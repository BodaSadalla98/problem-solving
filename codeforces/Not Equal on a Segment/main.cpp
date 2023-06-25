#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
   int n,m;cin>>n>>m;
   vector<int>a(n+1); vector<int>next(n+1);
   for(int i= 0;i<n;++i)
    cin>>a[i];

    next[n-1] = 1e9;
    for(int i=n-2;i>=0;i--){
        if(a[i]!= a[i+1])
            next[i] = i+1;
        else
        {
            next[i] = next[i+1];

        }

    }



    for(int i=0,x,y,z;i<m;++i){
        //cin>>x>>y>>z;
        scanf("%d%d%d", &x,&y,&z);
        x--,y--;
        if(z != a[x])
            cout<<x+1;
        else
        {
            if(next[x] <= y)
            cout<<next[x]+1;
            else
                cout<<-1;
        }

        cout<<endl;


    }

    return 0;
}
