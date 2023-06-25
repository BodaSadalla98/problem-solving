#include <iostream>

using namespace std;
int gcd (int p , int q ){
        if(q==0) return p;
        gcd(q, p%q);

}


int main()
{
   int  a, b, c, d;
    cin>>a>>b>>c>>d;
int p=0 ,q=1 ;
    if(((double)a/b)>((double)c/d)){
     p= a*d - c*b ;
     q = a*d;
 int temp = gcd(p,q);
    p /= temp;
    q /= temp;

}
    else if (  ((double)a/b)<  ((double)c/d)){
        p = b*c - a*d;
        q = b* c;

       int temp = gcd(p,q);
    p /= temp;
    q /= temp;

}

        cout<<p<<"/"<<q;

    return 0;
}
