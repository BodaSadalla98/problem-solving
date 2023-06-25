#include <iostream>
#include<bits/stdc++.h>

using namespace std;
double x[7],y[7];

double dx[8] = {0,.5,0.5,-0.5,-0.5,0,0.5,-0.5};
double dy[8] = {0.5,0,0.5,0,0.5,-0.5,-0.5,-0.5};



bool inside1 (double a,double b ){
    return (  (a >= min(x[3],x[4])
            && a <= max(x[3],x[4]) ) &&
                (b >= min(y[3],y[4])
            && b <= max(y[3],y[4]) )   );

}
bool inside2 (double a,double b ){
    return (  (a >= min(x[5],x[6])
            && a <= max(x[5],x[6]) ) &&
              (b >= min(y[5],y[6])
            && b <= max(y[5],y[6]) )   );

}
int main()
{
    for(int i=1;i<=6;i++)cin>>x[i]>>y[i];

    vector<pair<double,double>> points (4);
    vector<double>t1(4);
    t1  = {x[1],x[2],x[3],x[4]};
    sort(t1.begin(),t1.end());
    points[0].first =t1[1];
    points[1].first= t1[2];
     t1 =  {x[1],x[2],x[5],x[6]};
         sort(t1.begin(),t1.end());

      points[2].first =t1[1];
    points[3].first= t1[2];

    t1  = {y[1],y[2],y[3],y[4]};
    sort(t1.begin(),t1.end());
    points[0].second =t1[1];
    points[1].second= t1[2];
     t1 =  {y[1],y[2],y[5],y[6]};
         sort(t1.begin(),t1.end());

      points[2].second =t1[1];
    points[3].second= t1[2];


    for(auto i : points){
        for(int j =0;j<8;j++){
            double new_X = dx[j] + i.first;
            double new_Y = dy[j] + i.second;


                bool temp1 = inside1(new_X,new_Y);
                bool temp2 = inside2(new_X,new_Y);
            if( !temp1 && !temp2 ){
                cout<<"YES";
                return 0;

            }




        }




    }



    cout << "NO" << endl;
    return 0;
}
