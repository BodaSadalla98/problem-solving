#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int x,y,R,L,U,D,n, maxR,maxL,maxU,maxD, minR=1e9,minL=1e9,minU=1e9,minD=1e9;
vector <int >Rs;
vector <int >Ls;
vector <int >Ds;
vector <int >Us;
int main()
{
    string s;
    cin>>n;
    cin>>s;
cin>>x>>y;
   for(int i=0;i<n;i++){

    if(s[i]=='R'){ R++; maxR= max(maxR, i+1); minR=min(minR,i+1); Rs.push_back(i+1);}
    else if (s[i]=='D'){ D++;maxD= max(maxD, i+1); minD=min(minD,i+1);Ds.push_back(i+1);}
    else if (s[i]=='U') {U++;maxU= max(maxU, i+1); minU=min(minU,i+1);Us.push_back(i+1);}
    else if(s[i]=='L') {L++;maxL= max(maxL, i+1); minL=min(minL,i+1);Ls.push_back(i+1);}

}
    if((R-L)==x && (U-D)==y){cout<<0;return 0;}
    else if ((abs((R-L) - x) + abs ((U-D) -
y))> n ){cout<<-1; return 0;}


    return 0;
}
