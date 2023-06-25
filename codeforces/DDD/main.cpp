#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,arr[200005];
long long odd[200005],even[200005],ans;
int main()
{
    odd[0]=0;even[0]=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        odd[i]=odd[i-1];
        even[i]=even[i-1];
        if(i%2==0)even[i]+=arr[i];
        else
            odd[i]+=arr[i];

    }
    for(int i=1;i<=n;i++){
            long long even_before = even[i-1];
            long long odd_before = odd[i-1];
            long long odd_after= odd[n]-odd[i];
            long long even_after=even[n]-even[i];


               swap(odd_after,even_after);


        /**
        for(int j=i+1;j<=n;j++){
                if(j%2==0)odd_after+=arr[j];
        else
            even_after+=arr[j];

        }
        **/




        even_after+=even_before;
        odd_after+=odd_before;
        if(even_after==odd_after)ans++;
    }
    cout << ans << endl;
    return 0;
}
