#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
int  dpp[20][60][60][60];
bool dp(int index, int s1,int s2,int s3){
        if(index==n){
            if( s1==s2&&s2==s3)return dpp[index][s1][s2][s3] = 1;
            else return 0;
}
        if( dpp[index][s1][s2][s3] != -1)return dpp[index][s1][s2][s3];

        return dpp[index][s1][s2][s3] = dp(index+1,  s1+v[index], s2, s3) || dp(index+1,  s1,s2+v[index], s3) || dp( index+1, s1, s2, s3+v[index]);

}
int main()
{
    memset(dpp, -1, sizeof dpp);
    cin>>n;
        v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];

cout<<dp(0,0,0,0);
    return 0;
}

/*
11
17 59 34 57 17 23 67 1 18 2 59
*/
