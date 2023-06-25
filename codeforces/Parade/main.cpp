#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int ar[100001],a[100001],b[100001];
int biga, bigb, ind1,ind2;
int main()
{int x=0,y=0;
int n; cin>>n;
int diff=0,ind=-1;
for(int i=1;i<=n;i++){
        int t1,t2;
        cin>>t1>>t2;
        ar[i]= abs(t1-t2);
        x+=t1,y+=t2;
        a[i]=t1,b[i]=t2;


}
diff = abs(x-y);
bool flag = 0;
int ma = -1;
int ans;
for(int i=1;i<=n;i++){

                int cu  = max ( ( (ar[i]+x) - (y-ar[i]) ), ((ar[i]+y) - (x-ar[i]) )    );
        if(  cu>diff ){

            if(cu > ma){
                ma = cu;
                ans = i;
            }
           flag = 1 ;

        }

}
if(flag)cout<<ans<<endl;
else

cout<<0<<endl;


    return 0;
}
