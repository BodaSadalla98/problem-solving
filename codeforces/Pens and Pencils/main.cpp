#include <iostream>

using namespace std;

int main()
{

    int t; cin>>t;
    while (t--){
        int a,b,c,d,k;

        cin>>a>>b>>c>>d>>k;

       c= (c + a- 1) /c;
       d = (d +b-1) /d;

        if(c + d > k )cout<<-1<<endl;
        else
            cout<<c<<' '<<d<<endl;

    }
    return 0;
}
