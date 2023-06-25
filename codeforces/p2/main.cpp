#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  for(int i=0;i<t;i++){

    int frist,second, third;
     cin>>frist;
     cin>>second;
     cin>>third;
     if(frist !=0 && second !=0 && third !=0){
      if((frist+second+third)<=180)cout<<"YES";
      else
        cout<<"NO";
     }
     else
        cout<<"NO";
     if(i-t!=1)cout<<endl;


















   }
    return 0;
}
