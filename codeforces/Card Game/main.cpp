#include <iostream>

using namespace std;

int main()
{

    int t; cin>>t;


    while(t--){
        bool win = 1;
        int max1=0,max2=0;

        int n,temp,k1,k2;
        cin>>n>>k1>>k2;
        for(int i=0;i<k1;i++){
            cin>>temp;
            max1 = max(temp,max1);
        }
        for(int i=0;i<k2;i++){
            cin>>temp;
            max2 = max(temp,max2);
        }

        if(max1 >max2)cout<<"YES\n";
        else
            cout<<"NO\n";




    }

    return 0;
}
