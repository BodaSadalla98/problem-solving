#include <iostream>

using namespace std;

int main()
{
    int atebyBran=0,savedbyArya=0;
    int n,k;cin>>n>>k;
    int arr[n];
    bool can=0;
    int days=0;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=8)
        {

    atebyBran+=arr[i];
    int ba2e=8-arr[i];
    if(savedbyArya>=ba2e){
        atebyBran = atebyBran+ba2e;
            savedbyArya-=ba2e;

    }

    else
      {
          atebyBran+=savedbyArya;
      savedbyArya-=savedbyArya;

      }



    }
    else
    {
        atebyBran+=8;
        savedbyArya+=(arr[i]-8);

    }



    if(atebyBran>=k){days=i+1; can=1;break;}
    }



    if(can)cout<<days;
    else
        cout<<"-1";



}
