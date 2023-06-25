#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector <long long  >v;
int main()
{   long long n, s, sum =0;

        cin>>n>>s;
        v.resize(n);
        for (int i=0;i<n;++i){
            cin>>v[i];
            sum+=v[i];
        }

        sort(v.begin(),v.end());
        long  long  ans = v[0];
        if (sum < s)cout<<-1;
        else {

            while (s>0){
                for (int i=1;i<n;i++){
                    long long  dif = v[i]- v[i-1];
                    if (s< dif ){
                            s=0;
                        break;
                    }
                    else {
                    s-= dif;
                    v[i]-= dif;
                    }

                }
                if (v[0]== v[n-1] && s>0){
                        long long  temp = ceil( (double )s/(double)n);
                    ans-= temp;
                    v[0]-= temp;
                    s-= temp;

                }



            }

              cout << ans;
        }

    return 0;
}
