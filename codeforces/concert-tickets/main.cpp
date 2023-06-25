#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    multiset<int>s;
    vector<int>tickets(n), buyers(m);
    for(int i=0;i<n;++i){
        int t;cin >>t;
        s.insert(t);
    }
    for(int i=0;i<m;++i)
        cin>>buyers[i];

    //sort(tickets.begin(),tickets.end());

    for(int i=0;i<m;++i){
        auto it = s.upper_bound(buyers[i]);


        if(it == s.begin()){
            cout<<"-1\n";
        }




       //1 2 5 6

        else
        {

            cout<< *(--it)<<endl;
            s.erase(it);
        }




    }


    return 0;
}



/*

          5 5  7   8

         4  8 3
         3
*/
