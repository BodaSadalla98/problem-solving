#include <iostream>

using namespace std;

int gcd(int a, int b){
            if(b==0)return a ;
            return gcd(b, a%b);

}

int main()
{

    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;

        if( gcd(a,b) > 1 )cout<<"Infinite\n";
        else
            cout<<"Finite\n";



    }

    return 0;
}
