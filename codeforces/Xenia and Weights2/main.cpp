#include <iostream>
#include<bits/stdc++.h>
using namespace std;
   string s; int k;
vector<int> ans;
bool dfs(int index, int parent, int diff){
        if (index ==k)return 1;
            for(int i= diff+1; i<=10;i++){
                    if(s[i-1]=='1' && i!= parent){
                            bool ynf3= dfs(index+1 ,i, i-diff );
                       if(ynf3){ ans.push_back(i);return 1;}
                       else
                        continue;
                    }



            }
            return 0;

}

int main()
{

    cin>>s >>k;
    if(dfs(0,-1,0)){
        cout<<"YES"<<endl;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();++i){
            cout<<ans[i]<<' ';
        }

    }
        else
        cout<<"NO";

    return 0;
}
