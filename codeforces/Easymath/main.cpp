#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
	if (a == 0) return b;
	gcd(b  %a, a);
}

ll lcm(ll a, ll b){
	return (a*b) / gcd(a, b);
}

int main()
{
    int t;cin>>t;
    long long n,m,a,d,ans;
    while(t--){
            ans=0;
    cin>>n>>m>>a>>d;
   int arr [15];
    for(int i=0;i<15;++i)arr[i]=0;
long long nums= -n+m+1;
   ans = nums;


   for(int i=0;i<5;++i){
        long long temp = a+ (i*d);
   if(temp> nums )
    {
        if(floor(n/temp) < floor(m/temp))
        arr[i]++;

   }
   else{

       if(n%temp==0)arr[i]=  ceil(nums / temp);
        else

        arr[i]=  nums / temp;
   }
   }




   for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        int temp = lcm((a+ (i*d)), (a+ (j*d)));
        if(temp<=m){
                   if(temp> nums )
    {
        if(floor(n/temp) < floor(m/temp))
        arr[4+j+i]++;

   }
   else{

       if(n%temp==0)arr[i]=  ceil(nums / temp);
        else

        arr[4+i+j]=  nums / temp;
   }

        }


    }

   }

   for(int i=0;i<5;++i)ans-=arr[i];
   for(int i=5;i<15;i++)ans+=arr[i];

    cout <<  ans  << endl;

    }
    return 0;
}
