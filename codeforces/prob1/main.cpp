#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;


  long long  sum=0;
   int temp;
   for(int i=0;i<n;i++){
    cin>>temp;
    sum+=temp;
   }
   int a=0,b=0;
   for(int i=0;i<n;i++){
     cin>>temp;
     if(temp>=a){
        b=a;
        a=temp;}
          else if (temp>=b)b=temp;

     }

     if(n==2){cout<<"YES";
   return 0;}

   if((a+b)>=sum)cout<<"YES";
   else
    cout<<"NO";

    return 0;
}
