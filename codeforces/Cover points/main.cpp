#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>> p;
int main()
{

int n,x,y,biggestx=0,biggesty=0;
cin>>n;
int ybiggestx=0,xbiggesty=0;
p.resize(n);
for(int i=0;i<n;i++){
int a,b;
cin>>a>>b;
    if(a>=biggestx){
    biggestx=a;
if(ybiggestx<b)
ybiggestx=b;

}
if(b>=biggesty){
    biggesty=b;
if(xbiggesty<a)
xbiggesty=a;
}
p[i].first=a;
p[i].second=b;


}

biggestx*=2;
biggesty*=2;
for(int i=biggestx;i>0;i--){


 int tx=(1- ((double)ybiggestx/biggesty))*i;
if(biggestx/2>tx){

biggestx=i+1;
break;
}





}

for(int i=biggesty;i>0;i--){


 int ty=(1- ((double)xbiggesty/biggestx))*i;
if(biggesty/2>ty){
biggesty=i+1;
break;
}


}



std::cout<<min(biggestx,biggesty);


   return 0;
}
