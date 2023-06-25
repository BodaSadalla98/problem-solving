#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{



        string s ; int n, k ; cin>>n>>k>>s;

           if ( n==1  && k ) s[0]='0';

           else
           {


         if(s[0] > '1' && k > 0  )s[0] = '1',k--;







        for(int i=1;i<n;i++){

            if( k> 0 && s[i] > '0' ){s[i] = '0';k--; }

        }
           }
    cout <<s<< endl;
    return 0;
}
