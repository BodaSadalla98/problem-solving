#include <iostream>
#include<bits/stdc++.h>
using namespace std;


char s[1001];
int R = 2 , C;
int calc (int r, int c ){
        if(r == R || c == C || r< 0  || c < 0 )return 0;

        int a=0,b=0,x=0;

        a=  1+ calc (r, c+1);
        b = 1+ calc(r, c-1);
        if(s[c]== '1') x =1+  calc(r+1,c);

        return max(a, max(b,x));

}
int main()
{

    int t; cin>>t;
    while (t--){
        cin>>C;
        int st=-1, last=-1;
        for(int i=0;i<C;i++){

            cin>>s[i];
            if(s[i]== '1')last=i;
            if(s[i]== '1' && st == -1) st = i;



            }
            int ans =0;

            if(st == -1 && last == -1 )ans = C;
            else


            ans = max ( (2 * (last+1)) , (2 * (C - st)) );

             cout << ans  << endl;
    }

    return 0;
}
