#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long k,b,t,res;
int main()
{
    cin>>b>>k;

    for(int i=k-1;i>=0;i++)
    {
        cin>>t;
        res+= (pow(b,i)*t);
    }


    if(res%2==0)cout<<"even";
    else
        cout<<"odd";
    return 0;
}
