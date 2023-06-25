#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--){
            bool can = 0;
        int n,N;long long sum=0;
        int a[10001];bool x = 0;
        cin>>n;N= n;
        for(int i=0;i<n;i++){

                cin>>a[i],sum+=a[i];
                if(a[i]==0)can=1;
        }



        if(can == 1 )n--;
        if(sum ==0)cout<<"0\n";

            else
        {

if (n !=1){
        if(sum %2 ==0){
            for(int i=0;i<N;i++)
                if(a[i] == (sum /2 ) )x=1;

        }

        if(x && n >2 ){

                    cout<<"0\n";
                }
        else
        {
            cout<<1<<endl<<sum<<endl;

        }

}

      if(n ==1 )
        {
            if(sum %2 ==0)cout<<"2\n"<<sum/2 <<' '<<sum/2<<endl;
            else
                cout<<"2\n"<<1 <<' '<<sum+1<<endl;

        }


        }
    }
    return 0;
}
