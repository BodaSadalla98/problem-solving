#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int a[100001];
int main()
{

    int t;cin>>t;

    while(t--){

            set<int>s;

        s.clear();
        int ans = 1e9;
        int n,k,d;cin>>n>>k>>d;
         for(int i=0;i<n;i++)cin>>a[i];


        for(int i=0;i<n;i++){


                if(i<d){
                 s.insert(a[i]);
                if(i == d-1 )ans = s.size();

                }

                    else
                    {
                        s.erase(s.find(a[i-d])) ;
                        int x = a[i];
                      //  if( (s.find(x) ) ==( s.end() ) )
                       // {

                                        s.insert(x);
                    //    }

                        ans = min(ans, (int)s.size() );

                    }



        }


        cout << ans << endl;
    }

    return 0;
}
