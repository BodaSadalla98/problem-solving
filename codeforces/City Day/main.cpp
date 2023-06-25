#include <iostream>

using namespace std;
int a[100005];
int main()
{

    int n,x,y;int ans= -1;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
            int t1=x,t2=y;
            bool valid =1;
        for(int j=i-1;j>=0 && t1-- ;j--)
            if(a[j]<a[i])valid=0;
        for(int j=i+1;j<n && t2-- ;j++)
            if(a[j]<a[i])valid=0;


     if(valid){
        ans=i+1;
        break;
     }
    }
    cout << ans << endl;
    return 0;
}
