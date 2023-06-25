#include <iostream>

using namespace std;

int main()
{
  int n,s,t,moves=-1;
  cin>>n>>s>>t;
    int arr[n+1];

  int curr=s;
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  for(int i=i;i<=n;i++)
  {
      if(arr[i]==curr){
        curr=i;
      }
      else if(i==curr)
      {
         curr=arr[i];
      }
      if(curr==t){
        moves=i+1;
        break;

      }


  }
  if(s==t)cout<<0;
  else
    cout<<moves;
    return 0;
}
