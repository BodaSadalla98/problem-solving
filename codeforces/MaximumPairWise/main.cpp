#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long  fast(vector  <int> v){

long long  a=-1,b=-1;
for(int i =0;i<v.size();i++){
    if(v[i]>a){
    b=a;
a=v[i];

}
else if(v[i]<=a&&v[i]>b)b=v[i];

}
//long long s = a*b;
//return s;
return (long long )a*b;

}

int main()
{

//cout<<LONG_MAX<<endl<<INT_MAX<<endl<<LLONG_MAX;
int n;
cin>>n;
vector<int>v;
while(n--){
    int temp;
cin>>temp;
    v.push_back(temp);
}
cout<<fast(v);
    return 0;
}
