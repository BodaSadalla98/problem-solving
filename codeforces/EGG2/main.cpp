#include <iostream>

using namespace std;

int main()
{
   int n;cin>>n;
    string s="ROYGBIV";;
    string arr[7]={"","G","GB","YGB","YGBI","OYGBI","OYGBIV"};
    string ans="";
    int mod=n%7;
    int kammra=n/7;
    int index=6;
    for(int i=0;i<kammra;i++)ans+=s;
    ans+=arr[mod];
    cout<<ans;

    return 0;
}
