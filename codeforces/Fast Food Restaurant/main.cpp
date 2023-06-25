#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int ans= 0;
        if(a-->0)ans++;
        if(b-->0)ans++;
        if(c-->0)ans++;
        if(a==1 && b==1 && c>1)ans++;
        if(a>0 && b>0){ans++;a--,b--;}
        if(a>0 && c>0){ans++;a--,c--;}
        if(c>0 && b>0){ans++;c--,b--;}
        if(c>0 && b>0 && a>0){ans++;}

          cout << ans << endl;
    }

    return 0;
}
