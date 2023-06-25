#include <iostream>

using namespace std;

int n,t,c=0;

const int secs=86400;
int main()
{
    int a;
cin>>n>>t;
for(int i=0;i<n;i++){
    cin>>a;
    t-=secs-a;
    if(t<=0){c=i+1;break;}


}

cout<<c;
    return 0;
}
