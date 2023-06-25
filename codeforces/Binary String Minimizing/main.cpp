#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;cin>>q;
    while(q--){
            char s[1000001];
        long long n,k;  cin>>n>>k;
        scanf("%s",s);
        set<long long >pos;
        set<int>ans;
        for(int i=0;i<n;i++)if(s[i]=='0')pos.insert(i);

        long long  last = 0;
        for(auto p : pos){
            if(k <0)break;
            int can = max(p - k , last);
            k -=  p - can;
            ans.insert(can);
            last =  can+1;

        }


                for(int i=0;i<n;i++ ){

                    ans.find(i) != ans.end() ? printf("0") : printf("1");



                }
                cout<<endl;



    }

    return 0;
}
