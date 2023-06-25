#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
int p[200002];
 int find (int u ){
        if (p[u]==u)return u;

        return p[u] = find(p[u]);
 }
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    map<string,int> mp;

    for(int i=0;i<n;i++){
        string s; cin>>s;
        mp[s]= i;
        p[i]=i;
        p[i+n]= i+n;

    }
     for(int i=0;i<m;i++){
        int a1,b1,a2,b2,c; string s1,s2;
        cin>>c>>s1>>s2;



        a1 = find(mp[s1]),a2 = find(mp

                                    s1]+n);
        b1 = find(mp[s2]),b2 = find(mp[s2]+n);


            if(c==1){
                if(a1 == b2 || a2==b1){cout<<"NO\n";continue;}


                p[a1]= b1;
                p[a2]= b2;

            }
            else
            {
                if(a1==b1 ||a2 == b2 ){cout<<"NO\n"; continue;}


                p[a1]=p[b2];
                p[a2]= p[b1];

            }

            cout<<"YES\n";





     }
     while(q--){
            int a1,b1,a2,b2;
            string s1,s2;
            cin>>s1>>s2;

            a1 = find(mp[s1]),a2 = find(mp[s1]+n);
            b1 = find(mp[s2]),b2 = find(mp[s2]+n);

                if(a1 == b1 ||a2 == b2) cout<<"1\n";
                 else if(a2 == b1 ||a1 == b2) cout<<"2\n";
                 else cout<<"3\n";






     }
     return 0;
}
