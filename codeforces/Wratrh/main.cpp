#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,s2=0,e1=0,e2=0,ans=0,l;
  //cin>>n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    //cin>>l;
    scanf("%d",&l);
    if(l==0||i==1)continue;
    i-l<1? e1=1:e1=i-l;
    if(e1>=s2   ){ans+=i-e1;}
    else {
         ans+=(i-s2);
         if(e2-e1>0)ans+=e2-e1;
           }



    e2=e1;
    s2=i;




  }

  cout<<n-ans;
    return 0;
}
