#include <iostream>
#include <bits/stdc++.h>
using namespace std;



struct node {

        int nxt [26];
        int ch;

        node(){
            memset(nxt, -1 , sizeof nxt);
           ch =0;
        }



};
vector<node> v;

void add (string s ){
            int cur = 0;
        for(int i=0;i<s.size();i++){

            if (v[cur].nxt[s[i] - 'a'] == -1)
            {
                v.push_back(node());
                v[cur].nxt[s[i]- 'a'] = v.size()-1;

            }

            cur = v[cur].nxt[s[i]- 'a'] ;
            v[cur].ch ++;



        }




}


int search (string s ){
int cur = 0;
        for(int i=0;i<s.size();i++){
            if (v[cur].nxt[s[i] - 'a'] == -1)
            {
                return 0;

            }

            cur = v[cur].nxt[s[i]- 'a'] ;



        }

       return  v[cur].ch;
;



}
int main()
{

int n, q; cin>>n>>q;

        v.push_back(node());
for(int i=0; i < n; i++){
    string s ;
    cin>>s;
    add(s);


}
            for(int i=0; i<q;i++){

                string s ; cin>>s;
                cout<<search(s)<<endl ;

            }

    return 0;
}
