#include <iostream>

using namespace std;

int main()
{


    long long l,r,L,R;
    cin>>L>>R;
    l= L;r= R;
       long long m ;
int cnt = 0;
  long long ans ;
if (L == R && L!= 1)ans = 0;


else {
    while (l<=r && cnt++ < 60){

        m = (l+r)/2;



        if( (m*m*m) < R )
            l = m;
        else if ((m*m*m) > R )
            r= m;



    }

     ans = m-L+1;

        if(m == L && (L*L*L > R)) ans--;


}
    cout <<  ans   << endl;

    return 0;
}
