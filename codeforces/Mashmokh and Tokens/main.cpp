#include <iostream>
#include<math.h>
using namespace std;

int main()
{       int ans ;
    long long  n,a,b;
    cin>>n>>a>>b;
    for (int i=0;i<n;i++){

        int t;
        cin>>t;
            ans = floor( ((t*a)%b)/a);




        cout<< ans  <<' ';

    }

    return 0;
}

