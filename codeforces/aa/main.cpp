#include<bits/stdc++.h>
const int maxn=105;
int a[maxn],b[maxn],n,i,j,ans;
char c[maxn];
int main(){
	scanf("%d%s",&n,c+1);
	for(i=1;i<=n;++i)scanf("%d%d",a+i,b+i),c[i]-='0';
	for(i=0;i<=130;++i){
		int s=0;
		for(j=1;j<=n;++j){
			if(i>=b[j] && (i-b[j])%a[j]==0)c[j]^=1;
			s+=c[j];
		}
		ans=std::max(ans,s);
	}
	printf("%d\n",ans);
	return 0;
}
