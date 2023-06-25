#include <iostream>

using namespace std;

int main()
{   int one=0, zero =0;

    int n;cin>>n;
    string s; cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='n')one++;
            else if (s[i]=='z')zero ++;




        }

        while(one--){
            cout<<"1 ";

        }
        while (zero--){
            cout<<"0 ";


        }

    return 0;
}
