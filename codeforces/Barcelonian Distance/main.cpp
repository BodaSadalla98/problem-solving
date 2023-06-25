#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    double a,b,c,x1,y1,x2,y2;
    cin>>a>>b>>c>>x1>>y1>>x2>>y2;
    double ans1 = abs(x1 - x2) + abs(y1-y2);
        double ans2,ans3,ans4,ans5;



    double ptx[4]= {x1,((-c-(b*y1))/a),(x2),((-c- (b*y2))/a)};
    double pty[4]={((-c-(a*x1))/b),(y1),((-c-(a*x2))/b),(y2)};
    double temp1 = abs (x1 -  ptx[1]);
    double temp2 = abs (y1 - pty[0]);


    ans2 = temp2 + sqrt((pow((ptx[0]-ptx[2]),2))+(pow((pty[0]-pty[2]),2)) ) +  abs (y2 - pty[2]);
    ans3= temp2 +   sqrt((pow((ptx[0]-ptx[3]),2))+(pow((pty[0]-pty[3]),2)) ) +  abs (x2 - ptx[3]);
    ans4 = temp1 +  sqrt((pow((ptx[1]-ptx[2]),2))+(pow((pty[1]-pty[2]),2)) ) +  abs (y2 - pty[2]);
    ans5 = temp1 +   sqrt((pow((ptx[1]-ptx[3]),2))+(pow((pty[1]-pty[3]),2)) ) +  abs (x2 - ptx[3]);
    double ans = min(ans1,ans2);
           ans = min(ans,ans3);
           ans = min(ans,ans4);
           ans = min(ans,ans5);

/**
    double x_chosen,y_chosen, dis_chosen;
    if(temp1< temp2){
        dis_chosen= temp1;
        x_chosen = (-c - (b*y1))/a;
        y_chosen= y1;
    }
    else{
              dis_chosen= temp2;
        x_chosen = x1;
        y_chosen= ((-c-(a*x1))/b);

    }



    double ytemp = (-c-(a*x2))/b;

    double x_diff= abs(x_chosen - x2);
    double y_diff = abs (ytemp- y_chosen);
    double dist1 = abs(y2- ytemp) + sqrt( pow(x_diff,2)+pow(y_diff,2) );
    double xtemp = (-c-(b*y2))/a;

    double x_diff2= abs(x_chosen - xtemp);
    double y_diff2 = abs (y2 - y_chosen);


    double dis2  =  abs (x2 - xtemp)  +   sqrt( pow(x_diff2,2)+ pow(y_diff2,2) );


    double ans2 = dis_chosen + min (dis2, dist1);
    **/
        cout.precision(11);
    cout<<ans;
    return 0;
}
