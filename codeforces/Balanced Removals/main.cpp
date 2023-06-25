#include <bits/stdc++.h>
using namespace std;
const int maxn=50005;
int n,m;
struct node { int x,y,z,id; } e[maxn],p[maxn];
vector<node>v;
	vector<node>v2;
inline bool operator < (const node &a,const node &b)
{
	if(a.x!=b.x) return a.x<b.x;
	if(a.y!=b.y) return a.y<b.y;
	return a.z<b.z;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d%d%d",&e[i].x,&e[i].y,&e[i].z),e[i].id=i;
	sort(e+1,e+n+1);


	for(int i=1;i<=n;){
            if(i<n && e[i].x==e[i+1].x && e[i].y==e[i+1].y){

                printf("%d %d\n",e[i].id,e[i+1].id),i+=2;

            }
            else
                v.push_back(e[i]),i++;

	}

	for(int i=0;i<v.size();){
             if(i<v.size() && v[i].x==v[i+1].x ){

                printf("%d %d\n",v[i].id,v[i+1].id),i+=2;

            }
            else
                v2.push_back(v[i]),i++;

	}
	for(int i=0;i<v2.size();i+=2){

            printf("%d %d\n",v2[i].id,v2[i+1].id);
	}


	return 0;
}
