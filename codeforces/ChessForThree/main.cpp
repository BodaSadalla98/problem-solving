#include <iostream>

using namespace std;

int main()
{

   bool valid=1;
   int n,temp;
   int winner,looser;
   int spect=3,p1=1,p2=2;
   cin>>n;
   int temp2;

   for(int i=0;i<n;i++){
    cin>>temp;
    if(temp==spect)valid=0;

   if(temp==p1){
    temp2=p2;
    p2=spect;
    spect=temp2;


   }

   else {
    temp2=p1;
    p1=spect;
    spect=temp2;

   }


    if(!valid){
        cout<<"NO";
        return 0;
    }
   }

   cout<<"YES";


    return 0;
}
