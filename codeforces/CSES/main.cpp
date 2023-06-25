#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int freq[26];
long long  n,p[21];
int ans=0;
int col[8];
string grid[8];
bool d1[100],d2[100];
bool valid(int r,int c, int dia1, int dia2){
    return (!col[c]&&!d1[dia1]&&!d2[dia2]&&grid[r][c]!='*');
}

void calc(int r){
    if(r ==8){
        ans++;
        return;
    }
    for(int i=0;i<8;++i){
            if(valid (r,i,i+r,(8+i-r) )){
                col[i] = d1[i+r] = d2 [8+i-r] = 1;
                calc(r+1);
                 col[i] = d1[i+r] = d2[ 8+i-r] = 0;

            }




    }


}

int main()
{
   for(int i=0;i<8;++i)
    cin>>grid[i];
    calc(0);
    cout<<ans;
    return 0;
}
