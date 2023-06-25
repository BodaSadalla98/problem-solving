#include <iostream>
#include<bits/stdc++.h>
using namespace std;
map <int ,int >a;
vector<int > reminder;
int main()
{

    int t;
    cin>>t;
    while(t--){
        bool ans=1;
    int counter = 0;
    a.clear(); reminder.clear();
    int n,k;cin>>n>>k;
    int temp;
    for(int i=0;i<n;i++){cin>>temp; a[temp]++;}

           for(int i=0;i<n;i++){
        cin>>temp;
        if(a[temp]> 0 )a[temp] --;

        else reminder.push_back(temp);
        if (a[temp]==0) a.erase(temp);

}
        if(reminder.size()>1)ans=0;
        if(!a.empty())
            if (abs(a.begin()->first - reminder[0])> k )ans=0;


    ans ? cout<<"YES\n" : cout<<"NO\n";
}

    return 0;
}
