#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100001];
vector< pair <int, int  >>ans;
int main()
{

    int n;cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;

        arr[n-temp]++;

    }

    if(arr[0]== n){
         cout << "Possible" << endl;
        for(int i=0;i<n;i++)cout<<i+1 <<' ';
    }
    else
    {

    int t=1;

     for(int i=1;i<=n;i++){
        if(arr[i] ){
            if( arr[i] % i ==0) ans.push_back(make_pair(arr[i] / i , i));
        else
        {
            cout<<"Impossible";
            return 0;
        }
        }

     }
    cout << "Possible" << endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].first;j++){
                for(int k=0; k<ans[i].second;k++)
                cout<< t<<' ';
                t++;
        }

    }
}
    return 0;
}
