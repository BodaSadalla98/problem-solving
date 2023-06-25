#include <iostream>

using namespace std;
int arr[100009];
int ma=0;
bool all=1;
int main()
{
    int n;
    cin>>n;
    int maxi=0;
   for(int i=0;i<n;i++){

        cin>>arr[i];
        maxi= max(maxi,arr[i]);

        if(arr[i]!=0)all=0;

   }


   for(int i=0;i<n;i++){
       if(arr[i]!=maxi)continue;
       int j=i;
        while(arr[j]==maxi && j<n){
            j++;
        }
        ma = max(ma, j-i);
        i=j;
   }
if(all)cout<<n;
else

   cout<<ma;

    return 0;
}
