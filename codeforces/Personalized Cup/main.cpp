#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s; cin>>s;
   int a, b;

   int min_rows = ceil( s.size() / 20.00);
   int min_colms = ceil( (double)s.size() / min_rows);
   int nof_astrics  =  -s.size() +  min_rows*min_colms;
   string s2="*";

  // cout << s.size();
        for (int i=0; i<nof_astrics;i++) s.insert(   (i*min_colms ) , s2);

            cout<<min_rows<<' '<<min_colms<<'\n';
            for(int j=0;j<min_rows;j++){

                for(int k=0;k<min_colms;k++){

                    cout<<s[(min_colms*j)+k];

                    }
                    cout<<'\n';


            }




    return 0;
}
