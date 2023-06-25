#include <bits/stdc++.h>

using namespace std;
int memo[301][180000];
vector<int> v;
int mincost(int n , int sum)
{
    if(memo[n][sum] !=-1) return memo[n][sum];
    if(n == v.size())
    {
        if(sum == 0) return 0;
        else return 1e9;
    }
    int temp2 = 1e9;
    temp2 = mincost(n+1 , sum+v[n]);
    if(n>0)
        temp2 = min(temp2 , 1 + mincost(n+1 , sum -1*v[n]));
    memo[n][sum] = temp2;
    return memo[n][sum];
}



int main()
{
  int t;
  int x ; char sign;
cin>>t;
   cin >> x;
   v.push_back(x);
    memset(memo , -1 , sizeof(memo));
  for(int i =0 ; i<t-1; i++ ){
     cin >>sign >> x;
     if(sign == '-') v.push_back(-1*x);
     else v.push_back(x);

   }
long long ll= mincost(0,0);
if(ll>304)cout<<"-1";
else
    cout<<mincost(0, 0)<<endl;

    return 0;
}
