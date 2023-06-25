#include <iostream>

using namespace std;

int main()
{
    int n,s,ans=0;
    cin>>n>>s;
    for(int i=n;i>=1;--i){
        int temp = s/i;
        ans+=temp;
        s-=(temp*i);

        if(!s)break;

    }
    cout << ans ;
    return 0;
}
