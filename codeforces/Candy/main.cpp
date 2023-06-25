#include <iostream>

using namespace std;

int main()
{
  int n;cin>>n;
  for(int i=0;i<n;i++){
    int n1,n2,n3;cin>>n1>>n2>>n3;
    if((n1+n2==n3)||(n1+n3==n2)||(n2+n3==n1))cout<<"YES";
    else
        cout<<"NO";

    cout<<endl;









  }
    return 0;
}
