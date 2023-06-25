#include <iostream>
#include"bits/stdc++.h"

using namespace std;
int a[26];long long s;
int n,k;
long long fact(int n){
    if(n ==1 )
        return 1;
    return n * fact(n-1);

}

int calc(int index,int k, long long sum){
    if(k==0)
        return sum == s;
    if(index ==n)
        return sum == s;

    return  calc(index+1,k,sum+ a[index]) + calc(index+1,k,sum) +  calc(index+1,k-1, sum + fact(a[index])) ;

}
int main()
{
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout << calc(0,k,0) << endl;
    return 0;
}
