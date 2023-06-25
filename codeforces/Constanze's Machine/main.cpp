#include <iostream>
#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 14, mod = 1e9 + 7;

int n, fib[maxn];
int M = 1000000007;

int main()
{
     fib[0] = fib[1] = 1;
    for(int i = 2; i < maxn; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
    bool flag=0;

    string s;cin>>s;long long  ans = 1;
    int x = 0;
    bool in = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='u' || s[i] == 'n'  ){
            if(in && s[i] == s[i-1])x++;
            else
            {
                in = 1;



                ans +=  fib[x] % M;


                x=1;

            }
            if(i == s.size() -1){


                ans +=  fib[x] % M;




        }


        }
        else
        {

               ans +=  fib[x] % M;



            x=0;
            in=0;
            if(s[i] == 'm'|| s[i]== 'w'){
                flag =1;
                break;
            }

        }




    }

    if(flag)ans = 0;
    cout << ans << endl;
    return 0;
}
