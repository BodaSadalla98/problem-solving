#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
        while (t--){

        double d ;cin>>d;
    double a, b;
            if (  (d*d) < 4*d) {cout<<"N\n";continue;}
           else  if ((d*d)== 4*d){
            a = d / 2.0 ;
                b=a;

}
            else {
                a = (d + sqrt((d*d) - 4*d  ) )/2.0;
                    b = (d -  sqrt((d*d) - 4*d  ) )/2.0;


}





        cout.precision(17);

        cout <<"Y "<<a<<' '<<b<<"\n";
}
    return 0;
}
