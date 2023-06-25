#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> initial_position;
vector<int>ans;
vector<long long > cm;
int cnt=0;
long long sum =0;
int main()
{
    cin.tie(0);
        ios_base ::sync_with_stdio(false);
    initial_position.resize(101);
    int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int t;cin>>t;
            initial_position[t].push_back(i+1);
            sum+=t;
            cm.push_back(t);


        }

        sort(cm.begin(),cm.end());

        for(int i=1;i<n;i++)cm[i]+=cm[i-1];

        for(int i=n-1;i>0;i--){
                int big = cm[i]-cm[i-1];

                // iterate for the back
            for(int j=0;j<n;j++){
                // check if this element can be removed (see if it is a nice element)
                if(i!=j){

                    int subtracted ;
                    if(j==0)subtracted = sum - cm[j];
                    else
                        subtracted = sum - (cm[j]-cm[j-1]);
                    if(big == (double)subtracted/2){
                        cnt++;
                        ans.push_back(sum-subtracted);

                    }



                }

            }


        }




         cout << cnt<<'\n' << endl;
            for(int i=0;i<ans.size();i++){

                for(int j=0; j< initial_position[ans[i]].size();i++)cout<< initial_position[ans[i]][j]<<' ';

            }


    return 0;
}
