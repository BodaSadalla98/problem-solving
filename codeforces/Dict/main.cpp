#include <iostream>
#include<bits/stdc++.h>
using namespace std;


struct node{
 int edge[26]; int cnt;
node (){
     cnt=0;
 memset(edge,-1,sizeof edge);
}

};
int cnt=2;

node v[1000001 ];
void ins(string &s){
 int cur=1;
   v[cur].cnt++;
 for(int i=0; i<s.size();i++){
    if(v[cur].edge[s[i]-'a']==-1){
        v[cur].edge[s[i]-'a']=cnt++;

    }
    cur=v[cur].edge[s[i]-'a'];
    v[cur].cnt++;
 }


}

int pre(string &s){
    int cur=1;
    for(int i=0;i<s.size();i++){
 if(v[cur].edge[s[i]-'a']==-1)return 0;
  cur=v[cur].edge[s[i]-'a'];

    }
return v[cur].cnt;


}

int main()
{
int n,q;
string s;
cin>>n;
for(int i=0;i<n;i++){
    cin>>s;
    ins(s);


}

cin>>q;

for(int i=0;i<q;i++){
        cin>>s;
    cout<<pre(s
              )<<endl;


}
    return 0;
}
