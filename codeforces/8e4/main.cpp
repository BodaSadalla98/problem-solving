#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main()
{
int n;cin>>n;v.resize(n);
for(int i=0;i<n;i++)cin>>v[i];
sort(v.begin(),v.end());
for(int i=0;i<n;i++)cout<<v[i]<<' ' ;


    return 0;
}
