#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    string s="ROYGBIV";
    string ans="ROYG";
    int mod=n%7;
    int kammra=n/7;
    int index=6;
    char bb;
    for(int i=4;i<n;i++){
            char c=ans[n-4];
    int b=(s.find(c)+1)%6;
    if(n-i<4)
    {
         bb=ans  [ans.size()-1];
         int bbb=(s.find(bb)+1)%6;
        int i=1;

        if(s[bbb]=='R'||s[bbb]=='I'||s[bbb]=='V'){
               if(s[bbb]=='V')bbb=2;
              else  bbb=1;

            ans+=s[bbb];
        }
        else
            ans+=s[bbb];

        bbb= (bbb+1)%6;




    }

    else
    ans+=ans[i-4];

    }










    cout<<ans<<endl;





    return 0;
}
