#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s = "";
        if(n==1)s+="-1";
        else
        {
            s+="2";
            for(int i = 1;i<n;i++)
                s+="3";
        }

        cout<<s<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
