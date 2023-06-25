

#include <iostream>

using namespace std;

int main()
{
    int t;
        int prime[17]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
        cin>>t;
    while(t--){
        long long n;cin>>n;
        long long sum=1;
        int i=0;
            for( i;i<18;i++){
                sum*=prime[i];

            if(sum > n || sum<0){i--;break;}

            else if(sum==n)break;



}

        cout<<++i<<endl;









}
    return 0;
}
