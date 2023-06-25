#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int main()
{

int n;cin>>n;
vector<int> ans (n+1,-1);

for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){

        if(ans[i]==-1 && ans[j] == -1){
            int x,y;
            printf("? %d %d\n", i ,j);
            cout.flush();
            cin>>x;

            printf("? %d %d\n", j ,i);
            cout.flush();
            cin>>y;

            if(x>y)
                ans[i] = x;
            else
                ans[j] = y;

        }

    }


}
for(int i=1;i<=n;i++)
if(ans[i] == -1)
    ans[i] = n;


cout<<"! ";
for(int i=1;i<=n;i++)
cout<<ans[i]<<' ';

return 0;
}
