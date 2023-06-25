#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;cin>>t;
    while(t--){
//string a[50004];
vector<vector<char>>a;


           int rows[50004],cols[50004];
            memset(rows,0,sizeof rows);
            memset(cols,0,sizeof cols);

      int n,m;cin>>n>>m;
      a.resize(n);
       for(int i=0;i<n;i++)a[i].resize(m);
      int ans = 1e9;
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
        char ce; cin>>ce;
        a[i][j]=ce;


        if(ce=='*'){

            rows[i]++;
            cols[j]++;
        }


      }

        for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
        int need = (n- rows[i]) + (m-cols[j]);

        if(a[i][j]=='.' )need--;

        ans = min(ans, need);
      }

        cout<<ans<<endl;
    }

    return 0;
}
