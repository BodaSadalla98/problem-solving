#include <iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{

  string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char c ;string in;
  cin>>c>>in;
  string ans ="";
  for(int i=0;i<in.size();++i){
        auto temp=0;
    if(c=='R'){
        temp= s.find(in[i]) -1 ;



    }

    else
         temp= s.find(in[i])  + 1 ;


    ans+=s[temp];

  }

    cout<<ans;
    return 0;
}
