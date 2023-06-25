#include <iostream>

using namespace std;

int main()
{
   long long k , n, ans=0 , maxnofpipes;

   cin>>n>>k;

   maxnofpipes = ((k-1)*(2+ k)/2) - (k-2);
   if(maxnofpipes < n)cout <<-1;
   else if (n==1)cout <<0;
   else
   {
        long long l ,r, mid ;
        l=2;r=k;

       while (1){
                mid = (l+r)/2;
                long long summid = ((k-mid+1)*(mid + k)/2) - (k-mid);
                mid++;
                long long summidplus =((k-mid+1)*(mid + k)/2)- (k-mid) ;
                 mid--;
            if(summidplus< n && summid >=n ){
               // mid--;
                break;

            }

            else  if (summid >n){

                l=mid+1;
            }
            else if (summid<n)r=mid-1;

       }

        cout<< (k-mid+1)  ;
   }


    return 0;
}
