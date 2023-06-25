#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        if( (x<4 && y>3 ) || (x==1 && y!=1) )cout<<"NO\n";
        else
         cout << "YES" << endl;
    }

    return 0;
}
