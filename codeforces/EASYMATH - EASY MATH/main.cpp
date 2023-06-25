#include <iostream>
#include<bits/stdc++.h>
using namespace std;
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
    int x=0,y=0,z=0,u=0,v=0;
    for(int i=n;i<=m;i++){
        if(!(i%a)|| !(i%(a+d))||!(i%(a+2*d))||!(i%(a+3*d))||!(i%(a+4*d)))ans++;

        if(!(i%a))x++;
       if(!(i%(a+d)))y++;
       if(!(i%(a+2*d)))z++;
       if(!(i%(a+3*d)))u++;
     if(!(i%(a+4*d)))v++;

    }








cout<< x<<" "<<y<<" " ;
cout<<z<<" " <<u<<" "<<v<<endl;

    cout << (-n+m+1)- ans  << endl;

    }
    return 0;
}
