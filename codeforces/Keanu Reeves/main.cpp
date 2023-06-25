#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int zero_cnt=0,one_cnt=0;
    for(int i=0;i<n;i++){

        if(s[i]=='0')zero_cnt++;
        else
            one_cnt++;
    }
    if(zero_cnt==0 || one_cnt==0 || (zero_cnt != one_cnt)){
        cout<<"1\n"<<s;

        return 0;
    }



    cout <<2<<endl;
    cout<<s[0]<<' ';
     for(int i=1;i<n;i++)cout<<s[i];

    return 0;
}
