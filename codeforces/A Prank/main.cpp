#include <iostream>

using namespace std;
   int arr[101];
int main()
{
   int n; cin>>n;

        for (int i=0l;i<n;i++)cin>>arr[i];
    int ans=0, temp=0;
  int start=0;
            for(int i=0;i<n-1;i++){
                    if (i==n-2 && arr[n-1] - arr[n-2] ==1 && arr[n-1]==1000 )temp++;
                if (i==0 && arr[i+1] - arr[i] ==1 && arr[0]==1 )temp++;

               else  if (arr[i]== arr[i+1]-1 && 1+arr[i-1]== arr[i]){temp++;}
                else {
                      if (arr[i]- temp-1 != arr[i-temp-1] &&arr[i+1]!=1000 )temp--;

ans = max(ans, temp); temp=0;         }






}
    ans = max(ans, temp); temp=0;
        cout<<ans;
    return 0;
}
