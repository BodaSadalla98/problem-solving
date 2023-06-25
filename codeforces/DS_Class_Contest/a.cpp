#include "bits/stdc++.h"


using namespace std;

int main(){
	int n;
	cin>>n;
	vector< pair<int,int>> v(10001); 
	v.resize(100001);
	for(int i=0;i<=10001;i++)v[i] = {0,i};
	
	for(int i= 0;i<n;i++){
			int t;cin>>t;
			
			v[t] = {v[t].first+1 , t};
	}
	
	sort(v.rbegin(),v.rend());
	
	cout<<v[0].second;
	return 0;
}
