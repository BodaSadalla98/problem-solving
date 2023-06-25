#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{bool ans=0;
    int N,M,K;
    cin>>N>>M>>K;
    v.resize(N);
    int bigger=0, equ=0;
    for(int i=0;i<N;++i){cin>>v[i];
        if(v[i]>M)bigger++;
        else if (v[i]==M)equ++;
    }
  //  sort(v.begin(),v.end());
  if(K>= bigger){
    if(K>0  || (K==0 && equ))ans=1;

  }

       if(ans)cout <<"YES";
    else
        cout<<"NO";
    return 0;
}
