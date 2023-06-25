#include "bits/stdc++.h"

using namespace std;


int main(){
    int n;
    queue<int> q;
    stack<int> st;
    cin>>n;
    int last;
    for(int i=0;i<n;i++){
	string s; int t;
	cin >> s;

	if(s == "PUSH"){
	cin>>t;
	q.push(t),st.push(t);
    }
	else
	    q.pop(),st.pop();
    }
    cin>> last;
    if(last == q.front() && n> 1 )
	cout<<"QUEUE";
    else if (last == st.top() && n > 1)
	cout << "STACK";
    else
	cout<<"UNKNOWN";



    return 0;
}
