#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;bool can=1; int r=0,l=0;
    string s;
    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        int a = s[i]- '0' ;
        if(a !=4 && a !=7){can=0;break;}
        if (i<  (n/2))r+=a;
        else
            l+=a;





    }
    if(r!=l)can=0;
        if(can)
    cout << "YES" ;
    else
        cout<<"NO";
    return 0;
}
