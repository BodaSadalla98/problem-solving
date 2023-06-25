#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int v=0;
    int m;
    int fo=0;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        if(m>0)fo+=m;
     else if (m==-1)
     {
         if(fo>0)fo--;
         else
            v++;

     }
    }
    cout<<v;
    return 0;
}
