#include <iostream>

using namespace std;
int a[100005];

int main()
{
    int n;cin>>n;bool can=1;
    if(n==1 ) {
        cout<<"YES\n1 1";

    }
    int t=-1;
    for(int i=1;i<=n;i++)
    {
        int temp;cin>>temp;

        if(temp>=t)t=temp;



    }
    cout << "Hello world!" << endl;
    return 0;
}
