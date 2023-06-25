#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> v;
   int n,k=0;
cin>>n;
 int counter=1;
while(1){
      k++;
    if(n-counter> counter){
n-=counter;
v.push_back(counter);
    }
else{
    v.push_back(n);

break;
}
counter++;





}
cout<<k<<endl;
for(auto i :v)cout<<i<<' ';
    return 0;
}
