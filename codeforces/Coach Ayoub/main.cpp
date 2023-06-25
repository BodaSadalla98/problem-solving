#include <iostream>

using namespace std;

int main()
{int n, a ,b ,s ;
    cin>>n>>a>>b>>s;
        int t1, t2;
        if (n>2)
        t1 =  (s-a-b)/ (n-2);


        t2 =  a +((n-1)*b );
    if (t1 < a  || (n==1 && a!=b) || t2 < s || (n==2 && s!= (a+b)) ) cout <<"NO"<< endl;
    else cout<<"YES";
    return 0;
}
