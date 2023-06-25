#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int ans[100005];


struct node{
        int nxt[26];
        int cnt;
        int freq;

node(){

        memset(nxt, -1 , sizeof nxt);
        cnt  =0;
        freq = 0;
}

};

vector<node> trie;



void add(string s ){

        int cur  = 0;

        for(int i=0;i<s.size();i++){

            if(trie[cur].nxt[s[i] - 'a'] == -1){
                trie.push_back(node());

                trie[cur].nxt[s[i] - 'a'] = trie.size() -1;
                  trie [trie.size() -1 ].cnt = trie[cur].cnt +1 ;

            }

            cur = trie[cur].nxt[s[i] - 'a'] ;
            trie[cur].freq++;

            ans[ trie[cur].cnt ] = max (ans[trie[cur].cnt], trie[cur].freq );

        }










}
int main()
{

    int t; cin>>t;
    while(t--){
            trie.clear();
            trie.push_back(node());
        memset(ans, 0 , sizeof ans);

        int n ,q; cin>>n>>q;
        for(int i=0; i<n; i++){

  //  char s[200001];
  string s ;
                //scanf("%s",s);
                printf("%s", &s );
                reverse(s.begin(), s.end());
           // reverse(s, s + strlen(s));

            add(s);


        }

        for(int i=0;i<q; i++){
                int te; cin>>te;
            cout<<ans[te]<<endl;
        }




    }
    return 0;
}
