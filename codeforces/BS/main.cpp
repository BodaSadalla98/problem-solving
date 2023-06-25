#include <stdio.h>

#include<bits/stdc++.h>
int main()
{
   int arr[4];
   int cal=0;
   for(int i =0;i<4;i++)
    cin>>arr[i];
   string s;cin>>s;
   for(int i =0;i<s.size();i++)cal+=arr[s[i]-49];

    return 0;
}
