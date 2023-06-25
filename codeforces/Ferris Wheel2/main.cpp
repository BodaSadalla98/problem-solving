#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int main()
{
    int n,x,pt1,pt2;
    cin>>n>>x;
    vector<int> v(n);

    for(int i=0;i<n;++i)
        cin>>v[i];


    sort(v.begin(),v.end());

    pt1=0;
    pt2 = n-1;
    int ans=0;
    while(pt1<= pt2){

        if(v[pt2] +v[pt1] > x){
            ans++;
            pt2--;
        }
        else
        {
            ans++;
            pt2--;
            pt1++;
        }




    }
    cout<<ans;
    return 0;
}
 /*
        10 15

        5 7 8 8 8

 */
