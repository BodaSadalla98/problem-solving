#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> initial_position;
set<int>ans;
vector<long long > cm;
int cnt=0;
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
            initial_position[t].push_back(i+1);
           // cerr<< initial_position[t][0];
            sum+=t;
            cm.push_back(t);


        }

        if(sum/t ==n && n>3)

            {cout<<0;return 0;}

        sort(cm.begin(),cm.end());

        for(int i=1;i<n;i++)cm[i]+=cm[i-1];

        for(int i=n-1;i>0;i--){


                int big = cm[i]-cm[i-1];
                    if(big >cm[i-1])break;

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
                        ans.insert(sum-subtracted);

                    }
                        else if (big > (double)subtracted/2)break;



                }

            }


        }




         cout << cnt<<'\n' << endl;
            for(auto i : ans){

            int x = initial_position[i].size();
                for(int j=0; j< x;j++)cout<< initial_position[i][j]<<' ';

            }


    return 0;
}
