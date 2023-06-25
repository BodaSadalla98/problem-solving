#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        vector<int> a(n) ,b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        bool can =1;
        bool exit = 0;
        int diff;
        bool finished = 0;
        bool inside=  0;
        for(int i=0;i<n;i++){

            if(a[i]>b[i]){can = 0; break;}
            if(a[i]==b[i] && inside)finished = 1;
            if(a[i]!= b[i]){

                if(inside){
                    if(finished){can = 0;break;}
                    if(diff == a[i] - b[i])continue;
                    else
                    {can = 0;break;}
                }
                else
                {
                    inside = 1;
                    diff = a[i]- b[i];

                }


            }




        }
        if(can)cout<<"YES\n";
        else
            cout<<"NO\n";



    }
    return 0;
}
