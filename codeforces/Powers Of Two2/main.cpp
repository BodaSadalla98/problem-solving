#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int> ans;

int steps (int x){
    int tt=0;
    while(x){
            if(x==1){
                tt++;
                return tt;
            }
            x-= pow(2, (floor(log2(x))));
            tt++;

    }

    return tt;


}
int main()
{
    int n,k;
    cin>>n>>k;

    double a,b;
    a =log2(n) ;
    b= log2(n-1);
    if( ( ceil(a)!=a && k==1)  ||  k> n  || steps(n)> k )cout<<"NO";
    else
    {
        if(n%2 !=0 ) {
            ans.push_back(1);
            k--;
            n--;
        }
        int temp= (n/2);

        while (n ){
           int y= (floor(log2(n)));
                for(int i=0;i<=y;i++){
           int x= pow(2, y-i);
           double t1= log2(n-x);

        if((k-1 > n-x  && k!=1)  || ( n==x&& k>1))continue;
                n-=x;
                k--;
                ans.push_back(x);
                    break;

                }



        }


                if(n){
            int t= (k-temp)*2;

            for(int i=0;i<t;i++)ans.push_back(1);
            k-= t;
            for(int i=0;i<k;i++)ans.push_back(2);

       }



        cout<<"YES"<<'\n';
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
    }
    return 0;
}
