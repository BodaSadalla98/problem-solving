#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //freopen("out.txt","w",stdout);
        int x[4], y[4];

    int t, x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>t;
    while(t--){
            for(int i=0;i<4;i++){
                cin>>x[i]>>y[i];

            }

            /**
        cin>> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        bool overlap = 1;
        if( ( min (y1,y2) >= max(y3,y4)  ) &&
            max(x1,x2) <= min (x3,x4)) overlap =0;


        else if (( min (y3,y4) >= max(y1,y2)  ) &&
            max(x3,x4) <= min (x1,x2))overlap =0



        if(!overlap){
            cout<<"No Overlap\n";
            return 0;

        }

        **/



        bool overlap = 1;
        if( ( min (y[0],y[1]) >= max(y[2],y[3])  ) ||( min (y[2],y[3]) >= max(y[0],y[1]) )  )overlap = 0;


           if(
            ( max(x[0],x[1]) <= min (x[2],x[3]) ) ||
            ( max(x[2],x[3]) <= min (x[0],x[1]) ) ||
            ( min(x[0],x[1]) >= max (x[2],x[3]) )||
            ( min(x[2],x[3]) >= max (x[0],x[1]) )
              ) overlap = 0;






        if(!overlap){
            cout<<"No Overlap";

        }

        else
        {


        sort(x, x+4);
        sort(y,y+4);

    cout<<x[1]<<' '<<y[1]<<' '<<x[2]<<' '<<y[2] ;

        }




            cout<<"\n";
           if(t!= 0 ) cout<<"\n";
    }


    return 0;
}
