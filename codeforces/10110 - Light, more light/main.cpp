#include <iostream>
#include<math.h>
using namespace std;
 #define end endeeeee
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long   n,t;
        int ans=0;

        while(cin>>n && n!=0){

                    ans=0;

                        long long  start=1, end=n;
                            while(start<end){
                               long long mid = (start+end) /2;
                                    if (mid*mid == n){ans=1;break;}
                                    else if (mid*mid >n )end= mid-1;
                                    else start=mid+1;


                            }


     //  if (sqrt(n)== floor(sqrt(n)))ans=1;
                ans%2==0? cout <<"no"<<'\n' :cout <<"yes"<<'\n' ;
        }
    return 0;
}
