#include <iostream>

using namespace std;

int main()
{
   int n;cin>>n;

   for(int i=0;i<n;i++){

    int c=0,c1,c2,c3;
    cin>>c1>>c2>>c3;

    if(c1==c2&&c2==c3)c=1;
    else if(c1!=c2&&c2!=c3&&c1!=c3)c=3;
    else if(c1==c2&&c1!=c3)c=2;
    else if(c1==c3&&c1!=c2)c=2;
    else if(c3==c2&&c2!=c1)c=2;
     cout<<c<<endl;

   }
    return 0;
}
