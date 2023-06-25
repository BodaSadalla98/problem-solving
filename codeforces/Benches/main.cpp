#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, sum=0,maximum =0;
cin>>n>>m;
double t=n;
sum+=m;
while(n--){
int temp;
cin>>temp;
maximum=max(maximum,temp);
    sum+=temp;


}

//cout<<maximum<<endl;
int maxi;
maximum>ceil(double(sum/t))? maxi=maximum :maxi =ceil(double(sum/t));
cout<<maxi<<" "<<maximum+m;
    return 0;
}
