#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[500];
int main()
{
        cin.tie(NULL);
       ios_base :: sync_with_stdio(false);
        string s1,s2;
            while(cin>>s1){
                cin>>s2;
                        reverse(s1.begin(),s1.end());
                        reverse(s2.begin(),s2.end());
                        memset(arr, 0, sizeof arr);
                        for(int i=0;i<s1.size();++i){
                            for(int j=0;j<s2.size();++j)arr[i+j]+= (s1[i]-'0')*(s2[j]-'0');

                        }
                        string ans="";
                            for(int i=0; i<500-1;++i){
                                    arr[i+1]+= arr[i]/10;
                                    arr[i] %=10;
                            }
                                int i=499;
                            while(i>0&& arr[i]==0)i--;
                                for(i;i>-1;i--)ans+= (char) (arr[i]+48);


                cout<<ans<<'\n' ;
            }
    return 0;
}
