#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int arr[3][1000000];
int main()
{

    cin.tie(0);
    cout.tie(0);
    ios_base ::sync_with_stdio(false);
   int n,z=0,o=0,t=0;string s;

   cin>>n>>s;

   int right = n/3;
   for(int i=0;i<n;i++){
    if(s[i]=='0')z++;
    else if (s[i]=='1')o++;
    else
        t++;

        arr[0][i]=z;
        arr[1][i]=o;
        arr[2][i]=t;

   }
   for(int i=0;i<n;i++){

    if(z<right){
        if(t>right)t--;
        else
            o--;

        s[i]='0';
        z++;


    }

    else if(o<right){

                if( s[i]=='0' && arr[0][i] <= right )continue;

            if(z>right  )z--;
        else
            t--;

        s[i]='1';
        o++;

    }

    else {
            if(  s[i]=='0' &&  arr[0][i]<= right)continue;
            else if(  s[i]=='1' && arr[1][i] <= right )continue;

        if(z>right)z--;
        else
            o--;


        s[i]='2';
        t++;



    }






   }


   cout<<s;
    return 0;
}
