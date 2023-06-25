#include <iostream>

using namespace std;
int arr[150005];
int main()
{

    int n,k;cin>>n>>k;
    cin>>arr[0];
    for(int i=1;i<n;i++){
       cin>>arr[i];
       arr[i]+=arr[i-1];
    }
    int ans = arr[k-1];
    int ind=1;
     for(int i=k;i<n;i++){
            int cur = arr[i]-arr[i-k];
        if(cur < ans){
            ans = cur;
            ind=i-k+2;
        }
     }
    cout << ind;
    return 0;
}
