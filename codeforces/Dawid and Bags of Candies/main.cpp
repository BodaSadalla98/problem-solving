#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];

    cin>>a[0]>>a[1]>>a[2]>>a[3];bool can =0;
     int sum = a[0]+a[1]+a[2]+a[3];
    sort(a, a+4);
    if(sum % 2 ==0){
        if (a[3]  == (a[0]+ a[1] + a[2])     || (a[0] + a[1] == (double)sum /2.0) ||(a[0] + a[2] == (double)sum /2.0)  || (a[0] + a[3] == (double)sum /2.0) || (a[3] + a[2] == (double)sum /2.0)  )
            can =;
    }

    else
        can = 0;

     can ? cout << "YES"  :cout << "NO" ;
    return 0;
}
