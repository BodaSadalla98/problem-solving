#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   while(n--){

    int temp;cin>>temp;

    double d = (double)2.0f/(1-(temp/180.00));
    if(round(d)== d )cout<<"YES";
    else
        cout<<"NO";


    cout<<"\n";
   }
    return 0;
}
