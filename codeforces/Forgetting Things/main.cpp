#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a == 9 && b == 1)cout<<"9 10" ;
   else if(abs (a-b) > 1 || a > b )cout<<"-1\n";
    else
    {
        if(a == b)cout<<a*10<<' '<<b*10+1;
        else
            cout<<a<<' '<<b;

    }

    return 0;
}
