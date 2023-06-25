#include <iostream>
#include"bits/stdc++.h"
using namespace std;
int freq[1000001];
 vector<long long >v;
int main()
{

    int tt;cin>>tt;
while(tt--){
   long long n; cin>>n;
   long long t = n;
   v.clear();
   int ma = 0;
   bool big = 0;
    long long num=0;
    for(long long i = 2; i*i <= n;++i){
        int cnt = 0;
        while(n%i == 0 ){
            cnt++;
            n/=i;
        }
        if(cnt >= ma ){
            ma= cnt;
            num = i;
        }

    }
    if(ma == 0 )ma++;
    cout<<ma<<endl;
    for(int i=0;i<ma-1;++i)
    {
        t /= num;
        cout<<num<<' ' ;

    }
    cout<<t<<endl;;



}


    return 0;
}
