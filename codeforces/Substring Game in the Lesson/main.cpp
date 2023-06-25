#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int mini[500005];
int main()
{
    string s;cin>>s;

    mini[0]= s[0]- 'a';
       int pre = mini[0];
    for(int i=1;i<s.size();i++){
        int temp = s[i] - 'a' ;

            mini[i]= min (pre , mini[i-1]);

            pre = temp;




    }
    cout<<"Mike"<<endl;

    for(int i=1;i<s.size();i++ ){
            int t = s[i]- 'a';

            if(mini[i]< t) cout<<"Ann\n";
                else
                cout<<"Mike\n";




    }



    return 0;
}
