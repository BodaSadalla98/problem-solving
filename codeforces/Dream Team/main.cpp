#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[100001];
int gcd(int a , int b){
    if  (b == 0)return a;
        return gcd(b, a%b);
}

int main()
{
    int t;cin>>t;

    for(int i=1;i<=t;i++){
        int n; cin>>n;
        int ans = 0;
        for(int j=0;j<n;j++)cin>>arr[j];

        sort(arr, arr + n);

        for(int x = 0; x<n; x++){
                int temp =1;
            for(int y=n-1; y>x;y--){

                    int te = __gcd (arr[x], arr[y]);
                if(temp < te){
                    ans += te;
                    break;

                }



            }


        }
                printf("Case %d: %d\n",i,ans);


    }

    return 0;
}
