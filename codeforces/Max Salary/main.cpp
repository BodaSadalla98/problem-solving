#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

template <typename T>
string NumberToString(T pNumber)
{
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}

bool s( int a,  int b){

    int t1 =a; int t2=b;
    while (t1>=10)t1/=10;
    while(t2>=10)t2/=10;

if(t1!=t2)return t1 > t2 ;



else{

if(a>b){
int t3=a;
int t4=b;
     while (t3>=100)t3/=10;
    t3 %=10;
    while (t4>=100)t4/=10;
    t4 %=10;

if(t3!=t4){
 if(t3 < t2) return 0;
    else return a > b ;}

else{


    int t5 =a%10;

    if(t5 <= t4) return 0;
    else return a > b ;
}

}
else {

int t3=a;
int t4=b;
     while (t3>=100)t3/=10;
    t3 %=10;
    while (t4>=100)t4/=10;
    t4 %=10;

if(t3!=t4){
 if(t4 < t2) return 1;
    else return a > b ;}

else{


    int t5 =b%10;

    if(t5 <= t4) return 1;
    else return a > b ;
}



}

}

}


int main()
{
  vector<int>v;
int n;cin>>n;
v.resize(n);
for(int  i=0;i<n;i++)
{
int t;
cin>>t;
v[i]=t;

}


sort(v.begin(),v.end(),s );
string ans="";
for(int  i=0;i<n;i++){ans +=  NumberToString(v[i]);}
cout<<ans;

    return 0;
}
