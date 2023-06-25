#include <iostream>

using namespace std;
int a[1001];
int b[1001];


int main()
{
        int n,s;
            cin>>n>>s;
 bool can=0;
        for (int i=1;i<=n;i++)cin>>a[i];
        for (int i=1;i<=n;i++)cin>>b[i];
    if(a[1]!=0){
        if(a[s]==1){can=1;}
            else if(a[s]==0){
                if(b[s]==0)can=0;
            else {
                for (int i=2;i<=n;i++){

                    can = a[i] & b[i] &  i > s  ;
                            if (can)break;

                }

        }


}








}


   can ? cout<< "YES" : cout<<"NO" ;
    return 0;
}
