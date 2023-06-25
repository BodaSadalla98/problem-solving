#include <iostream>
#include<bits/stdc++.h>
using namespace std;

set<int>s;
int freq[201];

vector<pair<int,int>>score;
vector<pair<int,int>>segments;
int main()
{

    int n,k;cin>>n>>k;
    segments.resize(n);

    for(int i=0;i<n;i++){
        int l,r;cin>>l>>r;
        int t = 0;
        segments[i] = {l,r};
        for(int j=l;j<=r;j++){


                freq[j]++;

                if(freq[j] > k)s.insert(j) ;
        }



    }
int ans=0;
vector<int>a;
vector<int>scores(segments.size(),0);
for(auto p : s){

    for(int i=0;i<segments.size();i++)
        if( p >= segments[i].first && p <= segments[i].second)scores[i]++;

}
for(int i=0;i<segments.size();i++)
score.push_back( {scores[i],i} );






   sort(score.rbegin(),score.rend());
   for(int i=0;i<score.size() && !s.empty();i++){
        int l,r;
        l = segments[score[i].second].first;
        r = segments[score[i].second].second;
        for(int j=l;j<=r; j++){
            if(s.find(j) != s.end()){

                freq[j]--;
                if(freq[j] <= k)s.erase(j);


            }


        }
        ans++;
        a.push_back(score[i].second+1);
        if(s.empty()){
            break;
        }

   }



   cout<<ans<<endl;
   for(int i=0;i<ans;i++)
        cout<<a[i]<<' ';
    return 0;
}
