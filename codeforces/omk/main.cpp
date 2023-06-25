#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
vector<long long >v;

    int k;long long p;
    cin>>k>>p;

long long sum=0;

    long long temp1,reverse_num;
    int temp2,rem;
    int nofdigits=0;
for(long long  i=11;i<100000000;i++){
        nofdigits=0;
        sum=0;
        reverse_num=0;
        temp1=i;
        temp2=i;

     while(temp2 != 0)
    {

        temp2/= 10;
        nofdigits++;
    }
  if(nofdigits%2==1){

        i*=10;
        break;
  }

  while(temp1){
         rem=temp1%10;
         temp1=temp1/10;
         reverse_num=reverse_num*10+rem;
      }
      if(i==reverse_num){
           v.size()>0?  sum=v[v.size()-1]+i :sum=i;
        v.push_back(sum);
        if(v.size()==k){

            cout<<v[k-1]%p;
        return 0;

        }
      }








}





    return 0;
}
