#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "w", stdout);
    cout << "100000 100000" << endl;
    for(int i=0;i<100000;i++)cout<<"0\n";
    cout<<'\n';
    for(int i=1;i<100000;i++)cout<<i<<' '<<i+1<<'\n';
    return 0;
}
