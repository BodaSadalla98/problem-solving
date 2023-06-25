#include <iostream>

using namespace std;
int ans = 1e9;
int arr[3]={4,3,1};
int DP[10000001];
int  dp(int money)
{
        if (money==0) return  DP[money]= 0;
        if(DP[money]<2000)return DP[money];
        for(int i=0;i<3;i++){
            if(money >= arr[i]){

                 DP[money]=min (1+ dp(money-arr[i]), DP[money]);



}

}
        return DP[money];




}
int main()
{
for(int i=0;i<1001;i++)DP[i]=1e8;
   int n;
cin>>n;
 dp(n);
cout <<DP[n];
    return 0;
}
