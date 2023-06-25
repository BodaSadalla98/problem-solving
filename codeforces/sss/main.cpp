#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool  a[10000];
memset(a,1,sizeof a);
vector <int> v ;
void a7a (int n){

for(int i=2;i<=n;i++){
        if(a[i]){v.push_back(i);}
    for(int j=i*i;j<=n;j+=(i*i)/2){
        a[j]=0;
    }
}

}

int main()
{
int n;

    cin>>n;
    a7a(n);
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';

    return 0;
}

