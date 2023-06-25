#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int ans = 1e9;
int M;
double n;
long long pow (int a, int p){
        if(p == 0)return 1;
        if(p%2) return a * pow(a,p-1);

        return pow(a, p/2) * pow(a,p/2);

}


 void calc(int idx, int sum ){

            if(idx == M ) {
                    if(sum >=n)
                    ans =min (ans, sum);

                    return;
                    }

                    calc(idx+1, sum);
                    calc(idx+1 , sum + pow(3, idx)) ;

}

int main()
{
    int t;cin>>t;
    while(t--){
            ans = 1e9;
    cin>>n;
M = log10(n)/log10(3);
M+=2;
int te = n;



calc(0,0);
cout<<ans<<endl;
    }
    return 0;
}
