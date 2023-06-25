#include <iostream>
#include<bits/stdc++.h>


using namespace std;
   vector<int>cur;
   long long ans =0;
int a[7001];
int b[7001];

int dp[7001][7001];

int  x (int index, ){
        if








}


int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];


    for(int i=0;i<n;i++){
            long long  sum = b[i];
            cur.clear();
            cur.push_back(i);
        for(int j=i+1;j<n;j++){

            int diff = 0;

            for(int k =0;k<cur.size();k++){

                if(a[k] ^ a[j] !=0) diff ++;

            }

            if(diff < cur.size()){

                cur.push_back(j);
                sum += b[j];
            }

        }

        ans = max(ans, sum);














    }


        cout<<ans;

    return 0;
}
