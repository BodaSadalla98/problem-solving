#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--){
        int n,m;cin>>n>>m;
        int alt = 1;

        for(int i = 0;i<n;i++){
                 string s = "";
        for(int j=0;j<m;j++){


                if(! ((i+j)%2) )
                    s+='B';
                else
                    s+='W';
            alt ^= 1;
        }
            if(i==0 && (n*m)%2 == 0 ){
               s[1] = 'B';
            }
            cout<<s<<endl;

        }

    }

    return 0;
}
