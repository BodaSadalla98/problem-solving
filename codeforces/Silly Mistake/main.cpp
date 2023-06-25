#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ; cin>>n;
    set<int>cur,vis;
    bool valid =1;
    vector<int>ans;
    int pos = 0;
    vector<int> events(n);
    for(int i=0;i<n;i++){
        cin>>events[i];}



    for(int i=0;i<n;i++){
            int event  = events[i];
       if(event> 0 ){
            if(vis.find(event) != vis.end() ){
                valid=0;break;
            }
            cur.insert(event);
            vis.insert(event);


       }
       else
       {
           if(cur.find(-event) == cur.end()){ valid=0;break;}

           if(cur.find(-event) != cur.end()){
            cur.erase(-event);

           }

           if(cur.empty()){
            ans.push_back(i-pos+1);
            pos = i+1;
            vis.clear();

           }

       }


    }
    if(!cur.empty())valid=0;

    if(!valid)
    cout << "-1" << endl;
    else
    {
        cout<<ans.size()<<endl;
        for(auto i : ans)cout<<i<<' ' ;


    }
    return 0;
}
