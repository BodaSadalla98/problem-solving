#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t = 100;
   // while (t--){

    int ma = 0;
    int ma_index=-1;
    int n; cin>>n;

    vector<int> arr (n);
    vector<int>indecies;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]> ma) {ma = arr[i];
        ma_index=i;}
    }

    for(int i=0;i<n;i++){
        if(arr[i]== ma);
            indecies.push_back(i);

    }
    long long  best_score = 0;
    vector<int> ans(n);

    for(int i=0;i<indecies.size();i++){
    int a = indecies[i], b= indecies[i];
    int ma_a= ma , ma_b = ma;
    vector<int> temp(n);   temp = arr;
    long long  temp_score = 0;
    while(a>=0 || b < n){
           if(a>=0 ){
        int temp_a = min (ma_a , temp[a]);
        temp[a] = temp_a;
        ma_a = temp_a;
           }
           if(b<n){
         int temp_b = min (ma_b , temp[b]);
        temp[b] = temp_b;
        ma_b = temp_b;
           }

        a--,b++;
    }

        temp_score = accumulate(temp.begin(),temp.end(),0);
        if(temp_score > best_score){
            ans = temp;
            best_score = temp_score;
        }

    }

    for(int i=0;i<n;i++)cout<<ans[i]<<' ' ;
   // cout<<endl;
   // }
    return 0;
}
