#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000 + 10;
const int M = 1000000007;
const double PI = atan(1) * 4;
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
int t, g[9][9];
bool R[9][10], C[9][10], B[3][3][10];

void update(int i, int j, int val, bool f){
	R[i][val]=f;
	C[j][val]=f;
	B[i/3][j/3][val]=f;
}

bool calc(int i, int j){
	if(j==9)
		return calc(i+1,0);
	if(i==9){
		if(t)
			puts("");
		for(int i=0; i<9; ++i){
			for(int j=0; j<9; ++j)
				printf("%d ",g[i][j]);
			puts("");
		}
		return true;
	}
	if(g[i][j])
		return calc(i,j+1);
	for(int x=1; x<10; ++x){
		if(!R[i][x] && !C[j][x] && !B[i/3][j/3][x]){
			update(i,j,x,true);
			g[i][j]=x;
			if(calc(i,j+1))
				return true;
			update(i,j,x,false);
		}
	}
	g[i][j]=0;
	return false;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	int T;
	cin>>T;
	for(t=0; t<T; ++t){
		memset(R, 0, sizeof(R));
		memset(C, 0 ,sizeof(C));
		memset(B, 0, sizeof(B));
		for(int i=0; i<9; ++i)
			for(int j=0; j<9; ++j){
				scanf("%d",&g[i][j]);
				if(g[i][j])
					update(i,j,g[i][j],true);
			}
		if(!calc(0,0))
			printf("No solution\n");
	}

}


