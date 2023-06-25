#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void nn(int n);

vector <int> v ;
int  a[100000001];
int main()
{
int n;

    cin>>n;
   nn(n);
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';

    return 0;
}

void nn(int n){
memset(a ,1 ,sizeof a);
for(int i=2;i<=n;i++){
        if(a[i]){v.push_back(i);}
    for(long long j=i*i;j<=n;j+=i){
        a[j]=0;
    }
}

}
