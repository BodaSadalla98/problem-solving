#include <iostream>

using namespace std;
int out[1000000];
int main()
{
   int n,m;
cin>>n>>m;
int remain=m;


for(int i=0;i<n;i++){
    int temp;
cin>>temp;
out[i]+= temp/m;
if(out[i])
temp= int (temp% m);
if(temp>remain){
out[i]++;
remain= remain+(m-temp);

}
else if(temp<=remain)
    remain-=temp;

if(remain==0){
    out[i]++;
remain=m;
}
}

for(int i=0;i<n;i++)cout<<out[i]<<' ';

    return 0;
}
