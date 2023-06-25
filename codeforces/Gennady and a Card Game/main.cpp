#include <iostream>

using namespace std;

int main()
{
    bool yes=0;
    string s1,s2;
    cin>>s1;
    for(int i=0;i<5;i++){
        cin>>s2;
        if(s1[0]==s2[0]|| s2[1]==s1[1])yes=1;
    }

    if(yes)
    cout << "YES" ;
    else
        cout<<"NO";
    return 0;
}
