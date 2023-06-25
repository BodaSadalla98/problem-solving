#include <iostream>
#include<math.h>
using namespace std;
long long k,b,t,res;
int power[100001];
int main()
{
   cin>>b>>k;

   power[0]= 1;
   for(int i=1;i<k;i++){
        power[i]= (power[i-1]*b)%10;
   }

    for(int i=k-1;i>=0;i--)
    {
        cin>>t;
           long long temp =1;

        temp*= power[i]%10;
        temp *= t;

        res+= (temp) %10 ;
    }


    if(res%2==0)cout<<"even";
    else
        cout<<"odd";
    return 0;
}
