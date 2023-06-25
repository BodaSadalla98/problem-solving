#include <iostream>

using namespace std;

int main()
{
   int n,a,b;
   int right=0,left=0;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a>>b;
    a>0? right++ : left++;

   }
   if(right<=1||left<=1)cout<<"Yes";
   else
    cout<<"No";

    return 0;
}
