#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,c;
   while (1){
    cin>>n>>m>>c;
    if(!n&&!m&&!c)break;

    long long nof = (long long ) (n-7)*(m-7);
    if (nof%2==0) nof/=2;
    else

    {
        if(c)nof = (nof/2)+1;
        else nof = (nof/2);

    }

    cout <<nof<<endl;

   }
    return 0;
}
