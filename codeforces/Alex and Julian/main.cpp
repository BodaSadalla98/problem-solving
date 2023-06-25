#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<long long >ans;
vector<long long > v;

int odd =0, even =0;
int main()
{
    int n;
    cin>>n;

    v.resize(n);
  //  long long f;cin>>f;
    for(int i=0;i<n;i++){
        long long t;
        cin>>t;
        v[i]=t;
            if(t %2 ==0)even++;
            else
                odd++;


    }

         if (even > odd){
             for(int i=0;i<n;i++){

            if((v[i])% 2 == 1 )ans.push_back(v[i]);
             }
         }
         else
         {

             for(int i=0;i<n;i++){

            if((v[i])% 2 == 0 )ans.push_back(v[i]);
             }

         }


    cout << ans.size()<< endl;

    for(int i=0;i<ans.size();i++)cout<< ans[i]<<' ';
    return 0;
}
