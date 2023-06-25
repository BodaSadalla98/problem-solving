#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>> points, clues;
int main()
{

    int n;cin>>n;

    points.resize(n);
    clues.resize(n);
    for(int i=0;i<n;i++)cin>>points[i].first>>points[i].second;
    for(int i=0;i<n;i++)cin>>clues[i].first>>clues[i].second;

    sort(points.begin(),points.end());
    sort(clues.begin(),clues.end());

    cout <<points[0].first+ clues[n-1].first <<' '<< points[0].second + clues[n-1].second << endl;
    return 0;
}
