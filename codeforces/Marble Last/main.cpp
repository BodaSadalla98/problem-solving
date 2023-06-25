#include <iostream>

using namespace std;

int main()
{
  int n,s,t,moves=-1;
  cin>>n>>s>>t;
    int arr[n+1];

  int curr=0;
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
      int first=s;

  int val=0;
  while(curr!=first&&s!=t){


    s=arr[s];
    curr=s;



  val++;
  }
     cout<<(s==t? val:-1);
    return 0;
}
