#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 //int freqVector[1000000001];
map<int,int> m;
int main()
{
   int n;cin>>n;
int *arr = new int[100];


bool maj=0;
for(int i=0;i<n;i++){
            int t;
                cin>>t;
          m[t]++;
            //freqVector[t]++;
           // if(freqVector[t]==(n/2)+1)maj=1;
                if(m[t]>=(n/2)+1)maj=1;

}

cout<<maj;

    return 0;
}
