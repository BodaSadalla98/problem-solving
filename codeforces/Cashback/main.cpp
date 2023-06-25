#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int n,c, a[100005], m[100005];
long long dp[100005];
multiset<int>s;

long long  calc (int idx){
                if(idx == n) return 0;


                long long &ret = dp[idx];

                if(ret!=-1 )return ret;

            ret = calc(idx+1);

            if(idx + c <= n)
            ret = max(ret,  calc (idx+c)+ m[idx] );


            return ret;

}
int main()
{
long long sum=0;
    cin>>n>>c;

    memset(dp, -1 , sizeof dp);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    /**
    for(int i=0,j=0; i<n; ++i){
		while(j<n && j-i<c){
			s.insert(a[j]);
			++j;
		}
		m[i]=*s.begin();
		s.erase(s.find(a[i]));
	}
**/

    for(int i=0;i<c;i++)s.insert(a[i]);
    m[0] = *s.begin();

    for(int i=c;i<n;i++){
             s.erase( s.find( a[i-c] ) );
        s.insert( a[i]);
        m[i-c+1] = *s.begin();



    }


   cout << sum - calc(0);

    return 0;
}
