#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int fmin=1e9,smin=1e9,fmin_idx,smin_idx;int n,m,sum = 0;
        int a[100010];
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            int temp;cin>>temp;
            sum+=temp;

            if(temp < fmin){
                    smin = fmin;
                    smin_idx = fmin_idx;

                    fmin = temp;
                    fmin_idx = i;

            }
            else if (temp < smin){

                smin = temp;
                smin_idx = i;
            }



        }
/**
        if(m< (2*n -3) || n==2)cout<<"-1\n";
        else
        {
            cout<<2*sum+ (n-2) * (fmin+smin)<<endl;

            for(int i=1;i<=n ;i++){
                    if( i!= fmin_idx)
                cout<< fmin_idx << ' ' <<i <<endl;

            }
             for(int i=1;i<=n; i++){
                    if(i!= fmin_idx && i!= smin_idx )
                cout<< smin_idx << ' ' <<i <<endl;

            }
            for(int i = 2*n -3; i<m; i++){
                 cout<< fmin_idx << ' ' <<smin_idx <<endl;

            }



        }


**/

    sum *=2;

       if(m< (n) || n==2)cout<<"-1\n";
       else{
                cout<<sum<<endl;

            for(int i=1;i<n;i++){
                cout<<i<<' '<<i+1<<endl;}


         cout<< 1 << ' ' <<n <<endl;


       }

    }

    return 0;
}
