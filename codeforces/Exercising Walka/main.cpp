#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){

        int a,b,c,d,x,y,x1,x2,y1,y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int right = abs (x2-x), left = abs(x-x1), up = abs(y2-y), down = abs(y-y1);
/**
        while(1){

            int t1;
            t1 = min (a, x-x1);
            a-=t1;
            x-=t1;


            t1 = min (b, x2-x);
            b-=t1;
            x+=t1;

            if( (a > 0 && x == x1) || ( b > 0 && x==x2) || (!a && !b ))break;
        }

            while(1){
            int t1;
            t1 = min (c, y-y1);
            c-=t1;
            y-=t1;


            t1 = min (d, y2-y);
            d-=t1;
            y+=t1;

            if( (c > 0 && y == y1) || ( d > 0 && y==y2) || (!c && !d ) )break;
        }
**/

bool can = 1;
    if(!left&& !right && (a||b))can = 0;
    if(!down&& !up && (c||d))can = 0;
    if( a-b > left || b-a > right || c-d > down || d-c > up )can = 0;
    if(!can)
    cout<<"NO\n";
    else
        cout<<"YES\n";

    }
    return 0;
}
