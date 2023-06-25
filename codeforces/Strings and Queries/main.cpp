#include <iostream>
#include"bits/stdc++.h"

using namespace std;
char z[31],a[31],b[31];


int mx[10001][15][2];

struct node{
    int idx;
    int nxt[3];
    node(){
        memset(nxt , -1, sizeof nxt);
        idx=-1;
    }

};

int cnt =0;
node trie[500001];

void insert(char *s, int idx){
        int  cur = 0;
        for(int i=0;i<(int)strlen(s);++i){
            int c = s[i]-'a';
            if(trie[cur].nxt[c] == -1 )
                trie[cur].nxt[c] = ++cnt;
            cur =  trie[cur].nxt[c];
        }
        trie[cur].idx = idx;
}

int find (char * s){
    int cur = 0;
    for(int i=0;s[i];++i){
        cur = trie[cur].nxt[s[i]-'a'];

    }
    return trie[cur].idx;

}



int calc(char *s) {
	int n = strlen(s), ret = 0;
	bool ok1, ok2;
	for (int i = 0; i < n; ++i) {
		ok1 = ok2 = true;
		for (int j = 0;; ++j) {
			if (i + j < n && i - j >= 0 && s[i + j] == s[i - j] && ok1)
				++ret;
			else
				ok1 = false;
			if (i + j + 1 < n && i - j >= 0 && s[i + j + 1] == s[i - j] && ok2)
				++ret;
			else
				ok2 = false;
			if (!ok1 && !ok2)
				break;
		}
	}
	return ret;
}





 int calc2(int l, int r) {
	int log = 0;
	while ((1<<log) <= (r - l + 1))
		++log;
	--log;
	if (mx[l][log][0] < mx[r - (1<<log) + 1][log][0])
		return mx[r - (1<<log) + 1][log][1];
	return mx[l][log][1];
}



int main(int argc, char **argv)
{


 int tt;scanf("%d", &tt);
 while (t-- != 0){
    cnt=0;
    int n,q;
    //cin>>n>>q;
    scanf("%d%d", &n, &q);


    memset(mx, -1, sizeof mx);

    for(int i=0;i<n;++i){
       scanf("%s",z);
       // mp[z]=i;
       insert(z,i);
       // mp.insert({z,i});
        mx[i][0][0] = calc(z);
        mx[i][0][1] = i;

    }
    for(int k=1;k<15;k++){
        for(int i=0;i<n;++i){
            if(mx[i][k-1][0] != -1)
            mx[i][k][0] = max (mx[i][k-1][0], mx[i+(1<<(k-1))][k-1][0]  );


            if(mx[i][k-1][0] >= mx[i+(1<<(k-1))][k-1][0])
                mx[i][k][1] = mx[i][k-1][1];
            else
                mx[i][k][1] = mx[i+(1<<(k-1))][k-1][1];

        }
    }

    while (q-- != 0) {
       scanf("%s",a);
      // int l = mp[a];
      int l = find(a);
       scanf("%s",b);
       // int r = mp[b];
       int r = find(b);
       if (r < l)
				swap(l, r);
        int ma = -1e9, idx=0;
        idx = calc2(l,r);
        /**
          r = r-l+1;
        for(int k=14;k>=0;--k){
            if(r > (1<<k)){
                if(mx[l][0][0] > ma){
                    ma = max( ma,  mx[l][0][0]);
                    idx = mx[l][0][1];

                }

                 l = l+ (1<<k);
                 if(mx[l][0][0] > ma){
                    ma = max( ma,  mx[l][0][0]);
                    idx = mx[l][0][1];

                }


                r -= (1<<k);
            }


        }
        if(mx[l][0][0] > ma){
                    ma = max( ma,  mx[l][0][0]);
                    idx = mx[l][0][1];

                }

                **/

        printf("%d\n", idx + 1);

    }

    for (int i = 0; i < cnt; ++i)
			memset(trie[i].nxt, -1, sizeof trie[i].nxt);

 }



    return 0;
}
