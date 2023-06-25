#include <iostream>

using namespace std;

int main()
{
    int n,q;cin>>n>>q;
    string s;
    cin>>s;
    for(int j=0;j<q;q++){
        char l;int n1,n2;
        cin>>l>>n1>>n2;
        int c=0;
        for(int i=n1-1;i<n2;i++)
        {
            if(l==s[i])c++;
        }




        cout<<c<<endl;












    }
    return 0;
}
