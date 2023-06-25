#include <iostream>

using namespace std;

int main()
{
    int a[501];
    long long k;
    int n,cnt=0;
    int mpwr=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
            int t=max(a[i],a[i+1]);
        if(mpwr<t){
            mpwr=t;
            cnt=1;


        }
        else

         cnt++;

        if(cnt==k)break;



    }
    cout << mpwr << endl;
    return 0;
}
