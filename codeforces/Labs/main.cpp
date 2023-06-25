#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[301][301];
vector<vector<int>>v;


int main()
{
    int n;cin>>n;
    v.resize(n);
    int a=1;
   for(int i=1;i<=n;i++){

        if(i%2){
            for(int j=0;j<n;j++)v[j].push_back(a++);
        }

        else
    {
        for(int j=n-1;j>=0;j--)v[j].push_back(a++);


    }

   }


   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
         cout << v[i][j] <<' ';

    }
    cout<<endl;
   }

    return 0;
}
