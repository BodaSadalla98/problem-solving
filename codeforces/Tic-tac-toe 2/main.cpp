#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char g[3][3];

bool valid (char c){

    if ((g[0][0] == g[0][1] && g[0][1] == g[0][2]  && g[0][0] == c) || (g[0][0] == g[1][1] && g[1][1] == g[2][2]  && g[0][0] == c) || ( g[0][2] == g[1][1] && g[1][1] == g[2][0] && g[1][1] == c)

        || (g[0][0] == g[1][0] && g[1][0] == g[2][0] && g[0][0] == c) || (g[1][0] == g[1][1] && g[1][1] == g[1][2]) && g[1][1] == c  || (g[2][0] == g[2][1] && g[2][1] == g[2][2] && g[2][2] == c)
        || (g[0][1] == g[1][1] && g[1][1] == g[2][1] && g[1][1] == c)  ||(g[0][2] == g[1][2] && g[1][2] == g[2][2] && g[2][2] == c)
         ) return 1;


         return 0;

}

int main()
{

    int x=0, o = 0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {char c; cin>>c;
               g[i][j] = c;
               if (c == 'X')x++;
               else if (c =='0')o++;
        }

        bool xwin = valid('X');
        bool   owin = valid('0');

          if ( abs (x-o) > 1 || o-x > 0  || (xwin && owin) || (owin && o < x) || (xwin && o ==x))   cout<<"illegal"<<endl;
       else  if(x + o ==9 && !xwin && !owin) cout<<"draw"<<endl;

        else if(xwin )cout<<"the first player won"<<endl;
      else if (owin ) cout<<"the second player won"<<endl;

     else if(x == o+1)cout<<"second"<<endl;
     else
            cout<<"first"<<endl;







    return 0;
}
