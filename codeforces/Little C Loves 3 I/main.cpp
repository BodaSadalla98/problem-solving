#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
if(n%3==1){
   int t = n/3;
cout<<"1 "<<"1 "<<n-2;
//cout<<t<<" "<<t<<" "<< t+n%3;

}
else if(n%3==2){
   int t = n/3;
cout<<"1 "<<"2 "<<n-3;
//cout<<t<<" "<<t<<" "<< t+n%3;

}

else
{
cout<<"1 "<<"1 "<<n-2;

}

    return 0;
}
