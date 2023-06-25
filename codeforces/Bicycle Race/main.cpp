#include <iostream>

using namespace std;
int x[1001],y[10001];
int main()
{int ans=0,n;
cin>>n;

for(int i=0;i<=n;i++){
    cin>>x[i]>>y[i];


}



for(int i=0;i<n-1; i++){

    int t =(     ( (y[i+2]-y[i+1]) * (x[i+1] - x[i]) )  - ( (y[i+1] - y[i]) * ( x[i+2] - x[i+1])));




    if( t> 0 )ans++;



}
    cout << ans<< endl;
    return 0;
}
