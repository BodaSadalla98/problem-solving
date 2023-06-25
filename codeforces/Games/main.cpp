#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
 int a1[n],a2[n];
 for(int i=0;i<n;i++){
    cin>>a1[i]>>a2[i];

 }
 int counter=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i!=j){
            if(a1[i]==a2[j])counter++;



        }






    }




 }
 cout<<counter;
    return 0;
}
