#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int nums[50001];
bool valid=1;
int freq[50001];
vector<vector<int > >colors;
int main()
{
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        freq[nums[i]]++;

        if (freq[nums[i]] > k ) valid =0;

    }

    colors.resize(500001);

    if(!valid){cout<<"NO"; return 0 ;}

   // sort(nums, nums+ n);

    cout<<"YES\n";
    for(int i=1;i<=k;i++){
        cout<<i<<' ';
        colors[nums[i-1]].push_back(i);
      //  cerr<< colors[nums[i-1]][0];


    }
    int t=k;
    for(int j=k;j<n;j++){
             int u = nums[j];
             for(int i=1;i<=k;i++){
                 if ( find(colors[u].begin(), colors[u].end(), i) == colors[u].end() ){
                    cout<< i <<' ' ;
                    colors[u].push_back(i);
                }
                else
                    continue;

                        break;


             }




    }



    return 0;
}
