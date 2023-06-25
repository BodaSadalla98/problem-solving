#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100],b[100]; bool init [100];
int main()
{
    int n;string s;
    cin>>n>>s;
    int sum;int maxi=0;
    for(int i=0;i<n;i++)init[i]= s[i]-'0';
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    for(int i=0;i<=1000000;i++){
            sum =0;
        for(int j=0;j<n;j++){
            if(i < b[j]){
                sum += init[j];

            }

            else
            {
                int temp = ceil( (double) ((i-b[j]+1) / a[j]) );

                if(temp% 2==0) sum += (init[j] == 0);
                else sum += init[j];

            }


        }

        maxi = max(maxi,sum);


    }
    cout <<maxi << endl;
    return 0;
}
