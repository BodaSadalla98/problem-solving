#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >>t;
    while (t--)
    {
         long long a, b;
         cin>>a>>b;
         if(b==0){
            cout<<1<<endl;
         }
         else
         {


       b %= 4;
     if(b ==0 )b = 4;


                    int an = 1;
                    for(int i=0;i<b;i++)
                            an *=a;

                        cout<<an%10<<endl;




         }

    }

    return 0;
}
