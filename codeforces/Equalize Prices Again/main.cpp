#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{

    int q;cin>>q;
    while (q--){


             long long   total = 0;
        int n; cin>>n;
        for(int i=0;i<n;i++){
                int templ;
                cin>>templ;

                total +=templ;

                }

        cout<< total / n  + (total%n !=0 ) <<endl;

    }
    return 0;
}
