#include <iostream>
#include<bits/stdc++.h>
using namespace std;
set <long long >ans;
int main()
{

    cin.tie(0);
    cout.tie(0);
    ios_base ::sync_with_stdio(0);
    long long n, sum=0 ;
    cin>>n;
        ans.insert(  ((n*(n+1)))/2);
        ans.insert(1);
        if(n%2==0){
            ans.insert(2 + n/2);
            long long t = n*n/4;
            ans.insert(t);
        }
        else
        {
             ans.insert(  ((n*(n+1)))/2);
        }



    for(long long  i=3; i*i <= n;i++){
          if(n%i)continue;
            long long t1= (n-i+2)*n/ (i*2) ;
            long long t2 = (n-(n/i)+2)*i/2;
       ans.insert(t1);
       ans.insert( t2 );





    }



    for(auto i =ans.begin();i!= ans.end();i++){

    cout <<  *i<<' ' ;

    }
    return 0;
}
