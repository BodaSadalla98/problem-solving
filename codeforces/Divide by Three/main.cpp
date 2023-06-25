#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n;

int calc(int index, int sum, int take){
        if(index==n){
    if(sum%3==0){
    return 0;}
    else return 1e9;
        }
int ret= 1e9;
    ret= 1+calc(index+1,sum,take);
//cout<<ret<<" ";
 if(a[index]==0){
    if(take)

    ret= min(ret,calc(index+1,sum+a[index],1));}
    else    ret= min(ret,calc(index+1,sum+a[index],1));


return ret;


}
int main()
{
string s;
cin>>s;
n=s.size();
for(int i=0;i<n;i++){
    a[i]=s[i]-'0';


}

    cout << calc(0,0,0)<< endl;
    return 0;
}
