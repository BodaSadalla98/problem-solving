#include <iostream>
#include"bits/stdc++.h"
using namespace std;
double dp[100][100][100];
double calc(int  a,int  b, int c){
    if(a >=100 || b >= 100 || c >= 100)
        return 0;
    double &ret = dp[a][b][c];
    if(ret >= 0)return ret;
    double sum = a+b+c;
    ret = 0;
    return   ret= 1.0 +   a/sum* calc(a+1,b,c)  + b/sum*calc(a,b+1,c)   + c/sum* calc(a,b,c+1)  ;

sd as

  asd asd






}
int main()
{

        int A,B,C;
    cin>>A>>B>>C;
    memset(dp, -1 , sizeof dp);
   // long double ans =  (1/(A+B+C)) * ( (100-A)*A +  (100-B)*B  +(100-C)*C  ) ;
   cout.precision(7);
    cout << calc(A,B,C)<< endl;
    return 0;
}
