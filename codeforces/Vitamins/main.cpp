#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
double arr[7];
for (int i=0;i<7;i++)arr[i]=INT_MAX;
cin>>n;
double  ABC=DBL_MAX ;

for(int i=0;i<n;i++){
double cost;string s;
cin>>cost>>s;
int a,b,c,ab=-1,bc=-1,ac=-1,abc=-1;
a=s.find('A');
b=s.find('B');
c=s.find('C');

if(a!=-1&&b!=-1)ab=1;
if(c!=-1&&b!=-1)bc=1;
if(a!=-1&&c!=-1)ac=1;
if(a!=-1&&b!=-1&&c!=-1)abc=1;

if(a+1)arr[0]=min(arr[0],cost);
if(b+1)arr[1]=min(arr[1],cost);
if(c+1)arr[2]=min(arr[2],cost);
if(ab+1)arr[3]=min(arr[3],cost);
if (bc+1)arr[4]=min(arr[4],cost);
if(ac+1)arr[5]=min(arr[5],cost);
if(abc+1)arr[6]=min(arr[6],cost);


}

if(arr[0]==INT_MAX||arr[1]==INT_MAX||arr[2]==INT_MAX)cout<<"-1";
else {
ABC= min( double(arr[0]+arr[1]+arr[2]),ABC);
ABC= min(double(arr[6]),ABC);
ABC= min(double(arr[0]+arr[4]),ABC);
ABC= min(double(arr[1]+arr[5]),ABC);
ABC= min(double(arr[2]+arr[3]),ABC);

if(ABC>=INT_MAX||ABC==INT_MAX||ABC<1)
cout<<"-1";
else
cout<<ABC;

}
    return 0;
}
