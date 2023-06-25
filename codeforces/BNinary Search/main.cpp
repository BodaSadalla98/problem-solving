#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int > a;
vector<int>ans;

        int bs (int low , int high, int k){
        while(low<=high){

            int mid= (low + high )/2;
                if(a[mid]>k)high=mid-1;
                else if (a[mid]<k)low= mid +1;
                else
                    return  mid;
}
                return -1;


}
int main()
{
    int n;cin>>n;
a.resize(n);

        for(int i=0;i<n;i++)cin>>a[i];
int k;cin>>k;

ans.resize(k);
        for(int i=0;i<k;i++){

        int t ;cin>>t;
           ans[i]= (bs(0,n-1,t));

}
    for (auto i : ans)cout<<i<<" ";
    return 0;
}
