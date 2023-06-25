#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int vis[200];
int main()
{
int n;
vector<int> ans;
int cnt=0;
cin>>n;
v.resize(n);
for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;

sort(v.rbegin(),v.rend());

for(int i=0;i<n;i++){

    if(!vis[i]){
        vis[i]=1;
        int left = v[i].first;
        int right= v[i].second;
        int maxIndex=-1;
        int counter=0;
/**
        for(int h=right;h>=left;h--){
                    int temp=1;
                     for(int j=0;j<n;j++)
        {

                if(!vis[j]&&(h>=v[j].first &&h<= v[j].second))
                {

                                temp++;
                    if(maxIndex<temp){
                        maxIndex=temp;
                        counter=h;
                        break;}
                }


        }
                if(maxIndex<temp){
                        maxIndex=temp;
                        counter=h;
                       }


        }
**/

          //  maxIndex=counter;
        ans.push_back(left);
        for(int j=0;j<n;j++)
        {
            int   currentLeft= v[j].first;
            int currentRight=  v[j].second;
            if(!vis[j]&&(left>=currentLeft&&left<=currentRight))
                    vis[j]=1;


        }


}



}

        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";

    return 0;
}
