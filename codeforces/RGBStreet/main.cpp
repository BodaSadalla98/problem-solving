#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int r[21], g[21],b[21];
 int d[21][3];




class RGBStreet {
public :


    int estimateCost(vector<string> houses){
        for(int i=0;i< houses.size();i++){
            istringstream iss (houses[i]);
            iss>>r[i]>>g[i]>>b[i];

        }
    int n = houses.size();
        d[0][0] = r[0];
        d[0][1] = g[0];
        d[0][2] = b[0];

        for(int i=1;i<n;i++){
            d[i][0]= r[i] + min (d[i-1][1],d[i-1][2]);
            d[i][1]= g[i] + min (d[i-1][0],d[i-1][2]);
            d[i][2]= b[i] + min (d[i-1][0],d[i-1][1]);



        }


            return min(d[n-1][0],min(d[n-1][1],d[n-1][2]));
    }



};


