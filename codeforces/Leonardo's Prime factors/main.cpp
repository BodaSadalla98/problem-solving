#include <iostream>

 namespace std;

int main()
{
    int t;
        int prime[17]= {2,3,5,7,11,13,17,19,23,27,29,31,34,37,41,43,47};
        cin>>t;
    while(t--){
        long long n;cin>>n;
        long long sum=1;
        int i=0;
            for( i;i<18;i++){
            if(sum< n)sum*=prime[i];
            else if(sum==n)break;
            else
                {i--;break;}



}

        cout<<i<<endl;









}
    return 0;
}
