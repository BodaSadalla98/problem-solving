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
        int maxup,maxdown,maxleft,maxright;
        maxright = right + min (a, left );
        maxleft = left + min (b, right );
        maxup = up + min (c, down );
        maxdown =down  + min (d,up);
**/

//a = left b =- right  c = down  d = up


            int temp = min(right,b);
            b-= temp;
            int curleft = left + temp;
            int temp2 = min (a,left);
            a-=temp2;
           int  curright = right + temp2;

        while (b>0 && a > 0){


            int temp = min(curright,b);
            b-= temp;
            int curleft = left + temp;

            int temp2 = min (a,curleft);
            a-=temp2;
           int  curright = right + temp2;


        }

              int temp3 = min(down,c);
            c-= temp3;
            int curup = up + temp3;
            int temp4 = min (d,up);
            d-=temp4;
           int  curdown = down + temp4;

        while (c>0 && d > 0){


            int temp3 = min(curdown,c);
            c-= temp3;
            int curup = up + temp3;

            int temp4 = min (d,curup);
            d-=temp4;
           int  curdown = down + temp4;


        }


        if(!a&&!b&&!c&&!d)cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
