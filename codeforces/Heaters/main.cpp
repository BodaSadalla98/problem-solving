
#include<bits/stdc++.h>
#include <iostream>
#include"vector"
#include<algorithm>
using namespace std;
vector<int> v;
int a[1001];
int r, n;
	int arr[1001];
int DP[1001][2];
int dp(int index, bool l) {
	if (index == v.size()) {
                for (int i = 0; i < 1001; i++)arr[i]=0;
		for (int i = 0; i <v.size(); i++) {
		int temp = v[i];
			if (a[temp] == 1) {
				arr[temp] = 1;
				for (int j = 1; j<r && (temp + j) <= n; j++)arr[temp + j] = 1;
				for (int j = 1; j<r && (temp - j) >= 1; j++)
					arr[temp - j] = 1;

			}
            }


		for (int i = 1; i <= n; i++)if (arr[i] != 1)return 1e9;
		return 0;

	}

 if(DP[index][l]!= -1)return DP[index][l];
	a[v[index]] = 0;
	int x = dp(index + 1,0);
	a[v[index]] = 1;
	int y =  1+dp(index + 1,1);
      return x <=0 y ?   DP[index][0]=x  :   DP[index][1]=y;
//	return  DP[index]=min(x, y);




}
int main()
{

	cin >> n >> r;
	//v.resize(n);
        memset(DP,-1,sizeof DP);
	for (int i = 1; i <= n; i++) {
		int t; cin >> t;
		a[i] = t;
		if (t == 1)v.push_back(i);

	}

	int ans = dp(0,0);
	if (ans>n)ans = -1;
	cout << ans;
	return 0;
}


