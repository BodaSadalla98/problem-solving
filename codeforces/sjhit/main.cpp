
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#undef ll

const int mxN = 200010;

int main() {


	int N;
	cin >> N;
	string s;
	vector<int> a;
	vector<int> b;
	int num0 = 0;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int c = 0;
		if (s[0] == '(') {
			bool can = true;
			for (int j = 0; j < (int) s.size(); j++)
				c += s[j] == '(',
                    c -= s[j] == ')',
                     can &= c >= 0;
			if (can) {
				if (c == 0)
					num0++;
				else
					a.push_back(c);
			}
		}
		c = 0;
		if (s.back() == ')') {
			reverse(s.begin(),s.end());
			bool can = true;
			for (int j = 0; j < (int) s.size(); j++)
				c -= s[j] == '(', c += s[j] == ')', can &= c >= 0;
			if (can) {
				if (c != 0)
					b.push_back(c);
			}
		}
	}
	int res = num0 / 2;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i = 0,j = 0;i < (int)a.size();i++) {
		while(j < (int)b.size() && b[j] < a[i]) j++;
		if(j < (int)b.size() && a[i] == b[j]) {
			j++;
			res++;
		}
	}
	cout<<res<<'\n';
	return 0;
}
