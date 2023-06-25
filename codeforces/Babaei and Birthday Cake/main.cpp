#include <iostream>
#include<bits/stdc++.h>


using namespace std;




typedef long long ll;
const int N = 100000 + 10;
const int M = 1000000007;
const double eps = 1e-9;
const double PI = acos(-1);
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
int n, l, r;
vector<pair<long long, int> >v;
double area[N], dp[N], seg[4*N];


void update1(int u, int s, int e, double val){
	if(s>r || e<l)
		return;
	if(s==e){
		seg[u]=val;
		return;
	}


	update1(u*2, s, (s+e)/2, val);
	update1(u*2+1, (s+e)/2+1, e, val);
	seg[u] = max(seg[u*2], seg[u*2+1]);
}

void update2(int u,int s, int e, double  value){

           	if(s> r || e<l)return;

           	if(s == e ) {seg[u]= value;return;}


           	update2(2*u, s, (s+e)/2, value);
           	update2(2*u+1, (s+e)/2 +1, e, value );
           	seg[u] = max(seg[2*u], seg[2*u +1] );

/**
            update2(s, (s+e)/2, value, 2*u);
            update2((s+e)/2+1 , e, value ,2*u +1 );
            seg[u] = max(seg[2*u], seg[2*u+1]);
**/

}






double get(int u, int s, int e){
	if(s>r || e<l)
		return 0;
	if(s>=l && e<=r)
		return seg[u];
	return max(get(u*2, s, (s+e)/2), get(u*2+1, (s+e)/2+1, e));

}



int main()
{
    cin>>n;
	for(int r,h,i=0; i<n; ++i){
		scanf("%d%d",&r,&h);
                area[i]=PI*r*r*h;
		v.push_back(make_pair(1ll*r*r*h, -i));
	}
	sort(v.begin(), v.end());
	double ans=0;
	for(int i=0; i<n; ++i){
		int idx = -v[i].second;
		l = 1; r = idx;
		dp[i] = area[idx] + get(1, 1, n);
		l = r = idx+1;
		update2(1,1,n,dp[i]);
		ans=max(ans, dp[i]);
	}


	printf("%.9f  \n", ans );

    return 0;
}
