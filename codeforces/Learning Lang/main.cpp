#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int n,m,a,k,cnt=0;
 vector<int> emp[101];

int dsj[101];

int disj(int u){
if(dsj[u]==u)return u;

return   dsj[u] =disj(dsj[u]);



}

bool az=1;

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
            cin>>k;
            if(k)az=0;
        for(int j=0;j<k;j++){
                cin>>a;
                emp[i].push_back(a);}

  }
  for(int i=0;i<n;i++)dsj[i]=i;

  for(int i=0;i<n;i++)sort(emp[i].begin(),emp[i].end());

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int p=0;p<emp[i].size();p++){
                if(binary_search(emp[j].begin(),emp[j].end(),emp[i][p])){
                    dsj[disj(j)]=disj(i);
                }


        }


    }


  }

  if(az){cout << n;return 0;}
  for(int i=0;i<n;i++)if(dsj[i]==i)cnt++;
  cout<<cnt-1;



    return 0;
}
