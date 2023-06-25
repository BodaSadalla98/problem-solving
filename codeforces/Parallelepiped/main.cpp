#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    int a,b,c;
    a= sqrt((x+y)/(z/y + z/x));
    b= z*a/y;
    c= z*a/x;


    cout << 4*(a+b+c)<< endl;
    return 0;
}
