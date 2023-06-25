#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int freq[101];
int main()
{

        int n, k, types_cnt=0, max_cnt=0, sum = 0;
        cin>>n>>k;
            for (int i=0;i<n;i++){
                int temp;cin>>temp;
                if(freq[temp]==0)types_cnt++;
                freq[temp]++;

                max_cnt= max(max_cnt, freq[temp]);

            }

            int multi = ceil((double)max_cnt/k );
            int ans = -n + (k*types_cnt*multi);

    cout << ans << endl;
    return 0;
}
