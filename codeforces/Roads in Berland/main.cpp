#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[301][301];
int cost[301][301];
int main()
{
        cin.tie(0);
        cout.tie(0);

    memset(cost, 1e9, sizeof cost);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    int k;cin>>k;
    int temp;
    long long sum =0;
    for(int l=0;l<k;++l){
        sum=0;
        int a,b,c;
        cin>>a>>b>>c;
        --a,--b;

        if(c< arr[a][b]){
        arr[a][b]=c;
        arr[b][a]=c;
        }

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                       arr[i][j] = min(arr[i][j] , (arr[i][a] + arr[b][j] + c));
                       arr[i][j] = min(arr[i][j] , (arr[i][b] + arr[a][j] + c));

                }
            }



        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        sum+=arr[i][j];

    }
    cout<<sum/2<<' ';

    }

    return 0;
}
