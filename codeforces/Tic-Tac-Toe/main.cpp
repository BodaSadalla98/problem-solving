#include <iostream>
#include<bits/stdc++.h>

using namespace std;
char a[3][3];
  int x=0,o=0;
int main()
{
    int t;
    cin>>t;
    while (t--){
      x=0,o=0;

       for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
       {

           cin>>a[i][j];
           if(a[i][j]=='X') {


                x++;
           }


           else if (a[i][j]=='O') o++;

       }
       string s;
       getline(cin,s);

        bool valid =1;
       char win;
        bool ended=0;
        if(
           (a[0][0]==a[0][1] && a[0][1] == a[0][2] ))win = a[0][0],ended=1;

        else if (
           (a[0][0]==a[1][0] && a[1][0] == a[2][0] ) ) win = a[0][0],ended=1;
        else if  (
           (a[0][0]==a[1][1] && a[1][1] == a[2][2] ) )win = a[0][0],ended=1;
        else if(
           (a[0][1]==a[1][1] && a[1][1] == a[2][1] ) )win = a[0][1],ended=1;
        else if(
           (a[0][2]==a[1][2] && a[1][2] == a[2][2] ) )win = a[0][2],ended=1;
        else if(
           (a[0][2]==a[1][1] && a[1][1] == a[2][0] )) win = a[0][2],ended=1;
        else if(
           (a[1][0]==a[1][1] && a[1][1] == a[1][2] )) win = a[1][0],ended=1;
        else if(
           (a[2][0]==a[2][1] && a[2][1] == a[2][2] )) win = a[2][0],ended=1;


           if(!ended){
                if(x-o>1 || o>x)valid=0;


           }
           else
           {
               if(win=='X' && x!= o+1)valid =0;


                else if (win =='O')
               {
                   if(o!=x)valid=0;

               }
           }



        if(valid)cout<<"yes\n";
        else
            cout<<"no\n";







    }
    return 0;
}
