#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long  arr[100005];
int main()
{
   long long  n;cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr, arr+n);


    long long a = arr[0]+arr[n-2];

    if(arr[n-1] <(long long ) (a)){

        cout<<"YES"<<endl;

    }


    else
    {


        long long b=  arr[n-2]+arr[n-3];
        if(arr[n-1] < b){

                long long temp = arr[n-1];
                arr[n-1] = arr[n-2];
                arr[n-2]= temp;


                cout<<"YES"<<endl;


        }
        else
        {
            cout<<"NO";
            return 0 ;
        }




    }

 for(int i=0;i<n;i++)cout<<arr[i]<<' ';


    return 0;
}
