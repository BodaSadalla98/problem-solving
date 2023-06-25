#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int keys[100001];

int main()
{
    int fingers[6]= {0,1,2,3,4,5};
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>keys[i];
    vector<int> ans;
    ans.push_back(1);
    int last =1;
    for(int i=1;i<n;i++){
        if (keys[i]>keys[i-1]){

            ans.push_back(++last);
            if(last>5){
                cout<<-1;
                return 0;
            }
        }
         else  if (keys[i]<keys[i-1]){

            ans.push_back(--last);
            if(last<1){
                cout<<-1;
                return 0;
            }
        }
            else {
                    if(i!= n-1 && keys[i+1]!= keys[i]){
                        if(keys[i+1]> keys[i])last=1;


                        else last=5;


                            ans.push_back(last);

                    }
                    else{

                if (last>3) ans.push_back(--last);
                else
                     ans.push_back(++last);

            }
            }


    }
        for(auto    i :ans)cout<<i<<' ';


    return 0;
}
