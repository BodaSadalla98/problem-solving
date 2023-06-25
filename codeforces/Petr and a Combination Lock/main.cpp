#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;

int arr[16];
bool a (int ind, int sum ){

        if(ind==n )return sum==0;



                bool b= a(ind+1, (sum+arr[ind]) % 360);
             bool c = a(ind+1, (sum-arr[ind]) % 360);
         return b|c ;



}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    if(a(0,0))
    cout << "YES";
    else
        cout<<"NO";
    return 0;
}
