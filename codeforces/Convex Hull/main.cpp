#include <iostream>
#include<bits/stdc++.h>
using namespace std;



struct point{
        int x,y;
            point (int a,int b){
                x=a,y=b;
            }

    point operator - (const point &p) const {
            return point(x - p.x , y-p.y);

    }
    double operator ^ (const point &p)const {
        return x*p.y-y*p.x;
    }

    bool operator <(const point &p){
            if(x!=p.x)

                return  x< p.x;
            return
                 y< p .y;

    }




};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
