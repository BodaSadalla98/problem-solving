#include <iostream>

using namespace std;

int main()
{
   int arr[301][301]={0};
   int n,k;
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cin>>arr[i][j];
   }

   cin>>k;
   int a,b,val;
   for(int l=0;l<k;l++){
        cin>>a>>b>>val;
    long long  sum=0;a--;b--;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
       arr[i][j]=min(arr[i][j],(arr[i][a]+arr[b][j]+val));
       arr[i][j]=min(arr[i][j],(arr[i][b]+arr[a][j]+val));
    }


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        sum+=arr[i][j];

    }
    cout<<sum/2<<' ';



   }
    return 0;
}
