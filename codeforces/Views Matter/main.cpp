#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int>v;
int main()
{
   int n,m,ans=0;
   cin>>n>>m;
long long total=0;
   v.resize(n);
   for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];

   }
   sort(v.begin(),v.end());

int handled =v[v.size()-1];
    for(int i=v.size()-1;i>=1;--i){
            if(handled<1){


                    ans+=  1;
            }

            else
            {




          if(handled<=v[i-1]){ans++;

          handled--;
          }
          else{
                ans+=   (handled-v[i-1]);
            handled= v[i-1];
          }

            }
   }
if(handled>0)ans+= (handled);
else
    ans++;


   cout<<total- ans;
    return 0;
}
