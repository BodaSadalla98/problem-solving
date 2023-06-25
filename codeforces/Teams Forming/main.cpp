#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
    int sum=0;
    int n;cin>>n;

    for(int i=0; i< (n);i++){
        cin>>arr[i];


    }
    sort(arr, arr+n);
     for(int i=0; i< (n);i+=2){
        sum += (arr[i+1]- arr[i]);

     }
    cout << sum ;
    return 0;
}
