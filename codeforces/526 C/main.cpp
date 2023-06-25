#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int x= 1e9+7;
vector<pair<char, int >> p ;
int main()
{
    string s ;
    cin>>s;
    long long ans=0;
   ans += count(s.begin(),s.end() , 'a');
   int cnt=1;
   for (int i=0;i<s.size()-1;i++){

    if(s[i]!= s[i+1]){

        if (s[i]=='a'){
                 p.push_back(make_pair('a',cnt));
            cnt=1;
        }
        else if (s[i]=='b'){
              p.push_back(make_pair('b',0));

        }
        /**
        else if (s[i+1]=='a'|| s[i+1]=='b'){
              p.push_back(make_pair('c',0));

        }
**/

    }
        else if(s[i]==s[i+1]){

            if(s[i]=='a')cnt++;

        }

        if(i == (s.size()-2)&& s[i+1]=='a'){
                p.push_back(make_pair('a',cnt));
        }

   }

  // for (auto i : p )cout << i.first<<"      "<< i.second<<endl ;

  for(int i=0;i<p.size();++i){
         if (p[i].first=='b'&& i!=0){
    for(int j=i;j<p.size();++j){
        if (p[j].first=='b'){

            ans+= ((p[i-1].second * p[j+1].second )% x  ) ;
        }


    }


  }
  }
    cout<<ans;

    return 0;
}
