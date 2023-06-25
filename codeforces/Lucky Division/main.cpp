#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr [14]= {4,44,444,7,77,777,47,74,474,447,744,774,747,477};

    int n; cin>>n;
    for (int i=0;i<14;i++){
        if(n % arr[i]==0){
            cout<<"YES";
            return 0;

        }
    }
    cout<<"NO";


    return 0;
}
