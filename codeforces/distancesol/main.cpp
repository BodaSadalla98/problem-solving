#include <queue>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <map>
#include <set>

using namespace std;

double res[5];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a,b,c,x1,x2,y1,y2;cin>>a>>b>>c>>x1>>y1>>x2>>y2;
  // if(a==0 ||b==0) return printf("%.12lf\n",abs(x1-x2)+abs(y1-y2)),0;
    double inta1=(-1*c-a*x1)/b;
    double intb1=(-1*c-a*x2)/b;
    double inta2=(-1*c-b*y1)/a;
    double intb2=(-1*c-b*y2)/a;
     res[0]=sqrt(pow(x1-x2,2)+pow(inta1-intb1, 2))+abs(y1-inta1)+abs(y2-intb1);
     res[1]=sqrt(pow(x1-intb2,2)+pow(inta1-y2, 2))+abs(y1-inta1)+abs(x2-intb2);
     res[2]=sqrt(pow(inta2-x2,2)+pow(y1-intb1, 2))+abs(x1-inta2)+abs(y2-intb1);
    res[3]=sqrt(pow(inta2-intb2,2)+pow(y1-y2, 2))+abs(x1-inta2)+abs(x2-intb2);
    res[4]=abs(x1-x2)+abs(y1-y2);
    sort(res,res+5);
    printf("%.12lf\n",res[0]);

}
