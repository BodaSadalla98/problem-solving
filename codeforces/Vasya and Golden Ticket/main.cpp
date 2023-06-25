#include <iostream>

using namespace std;
vector<int> v;
int main()
{
int n,m;

    cin>>n>>m;
while(n--){
    v.push_back(m%10);
m/=10;
}
int sum=0;
for(int i=0;i<v.size();i++)sum+=v[i];
if(sum%3){cout<<"NO";return 0;}

    return 0;
}
