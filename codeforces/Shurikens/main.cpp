#include <iostream>
#include"bits/stdc++.h"

using namespace std;


/**
    +
    - 2
    +
    +
    - 3
    - 1



**/
int main()
{
    int n;cin>>n;
    bool can = 1;
    vector<int>ans;
    int ma=0;
    int cnt=0;
    for(int i=0;i<2*n;++i){
        char sign;int c;
        cin>>sign;

        if(sign =='+'){
            cnt++;
            ma= 0;

        }

        else
        {

            cin>>c;
            if(c < ma && cnt > 1)
            ma = max(ma,c);
            ans.push_back(c);

            cnt--;
            if(cnt<0){
                can = 0;
            }


        }



    }

    if(!can )
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(auto i : ans)
            cout<<i<<' ' ;

    }
    return 0;
}
