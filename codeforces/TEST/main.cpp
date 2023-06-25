#include <iostream>
# include<bits/stdc++.h>
#include<vector>
using namespace std;

long  fast(vector  <int> v){

long a=-1,b=-1;
for(int i =0;i<v.size();i++){
    if(v[i]>a){
    b=a;
a=v[i];

}
else if(v[i]<=a&&v[i]>b)b=v[i];

}
return a*b;

}

void  StressTest(int N,int M){
int k=10;
while(1 ){
int n = rand() % (N - 2+1 ) + 2 ;
vector<int > v;

int t=n;
while(n--){
    int e= rand()%(M-0+1) +0;
    v.push_back(e);
}

long long result1=0,result2;
for (int i=0;i<t;i++){

for (int j=i+1; j<t;j++){
    long long temp= v[i]*v[j];

result1= max(result1,  temp);


}


}


result2=fast(v);

if(result1==result2)

cout<<"OK!"<<"  "<<result1<<endl;
else
    cout<<"Wrong Answer!"<<result1<<"  "<< result2<<endl;

}

}
int main()
{
StressTest(10000,100000);
    return 0;
}
