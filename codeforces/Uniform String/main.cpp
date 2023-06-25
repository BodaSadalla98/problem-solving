#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
     int n,k;
    while(t--){
    string s = "";
    cin>>n>>k;
    int mi =  n/k;
    char c ;
    for(int i=0;i<k;i++){
        c= i + 'a';

        for(int j=0;j<mi;j++)s+=c;

    }
    for(int i=0;i < (n%k);i++)s+= c;


        cout<<s<<'\n';
    }
    return 0;
}
