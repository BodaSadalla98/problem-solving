#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t; cin>>t;
    while(t--){
        int n,m,temp;

        long long  odd1=0,even1=0,odd2=0,even2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp%2)odd1++;
            else
                even1++;
        }
         cin>>m;
        for(int i=0;i<m;i++){
            cin>>temp;
            if(temp%2)odd2++;
            else
                even2++;
        }




        cout<< odd1*odd2 + even1 * even2<<endl  ;




    }
    return 0;
}
