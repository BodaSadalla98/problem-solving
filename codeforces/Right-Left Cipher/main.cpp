#include <iostream>

using namespace std;

int main()
{

    string s,ans="";
    int mid;
    cin>>s;
    if(s.size()%2==0)mid =s.size()/ 2  -1;

        else
            mid=s.size()/ 2 ;
    ans+=s[mid];

                for(int i=1;i<= s.size()/2;++i){
                    ans+=s[mid+i];

                    if(s.size()%2==0 && i == s.size()/2)continue;
                        ans+=s[mid-i];
                }
    cout << ans << endl;
    return 0;
}
