#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int x[1000005];
vector<int> ans;
int main()
{
    int n;
    cin>>n;
a[0]=0;
bool can=1;
    for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<n;i++){
            can=1;
            for(int j=1;j<=i;j++){
                x[j-1]= a[j]-a[j-1];

}
             for(int j=i;j<=n;j++){

                if(a[j]!=(a[j-1] + x[(j-1)%i])){
                can =0;
                break;

}
}


        if(can){
            ans.push_back(i);
}




}





    ans.push_back(n);
    cout<<ans.size()<<endl;
for(int i=0; i<ans.size();i++)cout<<ans[i]<<' ' ;

    return 0;
}
