#include <iostream>

using namespace std;

double d;

int main()
{

    int n ,k;
    cin>>n>>k;
    long long sum=0;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        sum+= t;

    }
    double pro = 1.000/ (n-k+1);



    cout << pro * sum  << endl;
    return 0;
}
