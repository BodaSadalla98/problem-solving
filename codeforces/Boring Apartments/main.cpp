#include <iostream>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int ans = 0;
        int n;cin>>n;
        bool in = 0;
        int cur=0;
        bool passed_one=0;
        for(int i=0;i<n;i++)
        {
            int t;cin>>t;
            if(t == 1){
                    if(in&& passed_one){
                        in=0;
                        ans+= cur;

                    }
                    cur=0;
                    passed_one=1;

            }
            else
            {
                in = 1;
                cur++;

            }


        }

      cout<<ans<<endl;
    }
    return 0;
}
