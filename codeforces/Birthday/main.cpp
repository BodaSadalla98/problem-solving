#include <iostream>

using namespace std;

int main()


{
long long n,m,k,l;
 cin>>n>>m>>k>>l;

 if(m>n|| (k+l > n)){
    cout<<-1;return 0;
}
long  t = m;
long  sum = l+k ;
long long  left = 1, right = 1e18;
long long  mid =1 ;
    while(t<sum){
mid   =  ((left+ right )>> 1 );
 long long temp  = m * mid ;
                if(temp>=sum && temp  / sum ==1 && ((mid-1)*m) < sum)break;

            if(temp > sum)right = mid-1;
            else
                    left = mid +1 ;


        }



        cout<<mid;


    return 0;
}
