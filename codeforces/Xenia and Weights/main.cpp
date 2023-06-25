#include <iostream>

using namespace std;
int arr[10];
int main()
{
    string s;
    cin>>s;
   int k;
   int available =0;
   cin>>k;
   bool first=0;
   int mini=0, maxi=0;
   for(int i=0;i<10;i++){
        if(s[i]=='1'){
            available ++;
           // if(!first){mini = i+1; first=1;}
           if(available >1){
            mini = maxi;

            maxi = i+1;
           }
           else
           {
               maxi=mini= i+1;
           }
        }


   }

   if((available < 2 && k>1 ) || (k>2 && (2*mini <= maxi)))
    cout<<"NO";
    else
   {
       cout<<"YES"<<endl;
       for(int i=0;i<k;i++){
        if(i%2==0)cout<<mini;
        else
            cout<<maxi;
        cout<<' ';
       }


   }

    return 0;
}
