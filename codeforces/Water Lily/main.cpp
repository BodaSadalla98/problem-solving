#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
double l,h;cin>>h>>l;
cout.precision(10);
cout<< ((sqrt(l*l + h*h))/(2* cos(atan(l/h))))  - h;

    return 0;
}
