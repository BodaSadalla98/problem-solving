#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int n;
int s,d;
int temp=0;
int ans=0;

int main()
{
 cin>>n;
 for(int i=0;i<n;i++){

    cin>>s>>d;
    temp=s;
    while(temp<ans){
        temp+=d;

        ans=max(ans,temp);




    }














 }








    cout << ans<< endl;
    return 0;
}
