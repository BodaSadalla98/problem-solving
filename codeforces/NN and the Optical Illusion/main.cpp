#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
int main()
{
    double n,r,R, theta;
    cin>>n>>r;

    theta = PI/n;
    R = (r* sin(theta))/(1- sin(theta));

    cout.precision(10);
    cout<<R;

    return 0;
}
