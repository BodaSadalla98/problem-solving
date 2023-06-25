#include <iostream>

using namespace std;
long long ans;
long long  n,m,k;
long long  maxi,second_maxi;

int main()
{
    cin>>n>>m>>k;
    int a;
    for(int i=0;i<n;i++){
            cin>>a;
            if(a>=maxi){
                second_maxi = maxi;
                maxi=a;
            }
            else if(a> second_maxi)second_maxi=a;

    }

    ans+= (m/ (k+1))* (maxi*k +second_maxi);
    ans+= (m% (k+1)) * maxi;

    cout << ans<< endl;
    return 0;
}
