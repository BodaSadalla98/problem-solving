#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;

    int a=0,b=0;
   // int i = ceil(sqrt(n));
    /**
    for (i; i>0;i--)
        {

                if(n%i==0){
                    a=i;
                    b=n/i;

                    break;
                }


    }


**/
bool flag=0;
            for(int i=1;i <=n;i++){
                    if(flag)break;
                for(int j=1;j<=i;j++)
            if(i*j >= n){
                n= i+j;
            flag=1;
                break;
            }
            }


/**
        if(a==1)
            cout<<n;
        else
**/
        cout<< n;
    return 0;
}
