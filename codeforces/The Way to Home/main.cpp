#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char lilly[205];
  int DP[305][305];
    int n,d;

int dp(int index, int cnt){


            for(int i=d;i>0;i--){

                    int newind= i+index;

                if(newind==n)return cnt+1;
                else if (newind >n || lilly[newind]=='0')continue;
                else
                    return  dp(newind , cnt+1);


            }
            return -1;

}
int main()
{

   // memset(DP,-1, sizeof DP);

    cin>>n>>d;


    for(int i=1;i<=n;i++)cin>>lilly[i];


    cout << dp(1,0)<< endl;
    return 0;
}
