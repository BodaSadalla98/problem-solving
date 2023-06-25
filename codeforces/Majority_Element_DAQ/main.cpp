#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int>v;


bool maj (int l,int r, int s){

        if(s<=2){



}
        int mid = (l+r)/2;

     bool x= maj(l,mid) ;
  bool y =    maj(mid+1,r);


}
int main()
{
    int n;
cin>>n;
v.resize(n);
for(int i=0;i<n;i++)cin>>v[i];

 cout<< maj(0,n-1,n);

    return 0;
}
