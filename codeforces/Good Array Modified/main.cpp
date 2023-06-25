#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> initial_position;
vector<int>ans;
vector<int > cm;

long long sum =0;
int main()
{
    cin.tie(0);
        ios_base ::sync_with_stdio(false);
    initial_position.resize(1000001);
    int n;
        cin>>n;
        int t;
        for(int i=0;i<n;i++){
            cin>>t;
            initial_position[t]++;

            sum+=t;
            cm.push_back(t);


        }




        for(int i=0;i<n;i++){
                    sum -= cm[i];
                    initial_position[cm[i]]--;
                    if((sum%2==0) &&(sum/2 < 1000001) &&(initial_position[sum/2]>0))ans.push_back(i+1);


                    sum+=cm[i];
                    initial_position[cm[i]]++;







        }




         cout << ans.size()<<'\n';
            for(auto i : ans){

           cout<< i<<' ';

            }


    return 0;
}
