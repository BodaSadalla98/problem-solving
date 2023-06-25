#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k;cin>>k;
    while(k--){
        int n;cin>>n;
       // char s[10001];
        //char t[10001];
        string s,t;
        int cnt=0;
        bool can = 1;
        cin>>s>>t;
       // scanf("%s%s",s,t);


        int idx;
        for(int i=0;i<n;i++){

            if(s[i]!= t[i]){cnt++;
            idx = i;
            }

        }
        if(cnt>2)can=0;
        else
        {
            for(int i=0;i<n;i++){
                    //char temp = s[i];

                    //s[i] = t[idx];
                    swap(s[i],t[idx]);
                    if(s == t){
                        can=1;
                        break;
                    }
                    else{
                        can =0;
                    }

                       swap(s[i],t[idx]);



            }

        }


        if(can)cout<<"Yes\n";
        else
            cout<<"No\n";


    }

    return 0;
}
