#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100001];
long long sum_arr [100001];

long long po (int a, int p){
        if (p==1)return a;
            if(p==0)return 1;
        if (p%2 !=0 ) return a * po(a, p-1);

        long long r= po(a, p/2);
        return r*r;

}


int main()
{
 int n,k, cnt=0;
    cin>>n>>k;
        for(int i=0;i<n;i++)cin>>arr[i];
        sum_arr[0]= arr[0];
        k = abs(k);
    for(int i=1;i<n;i++)sum_arr[i]= arr[i]+sum_arr[i-1];


        for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                 long long  curr=0;
            if(i==0) curr = sum_arr[j];
            else
                    curr = sum_arr[j]- sum_arr[i-1];
                    if(curr == 1|| curr ==k ){cnt++; continue;}
                    if(curr<k )continue;
                double d =  (log10(curr)/ log10(k));
                        int power =  round(d);


                if(   ceil(d) - d  < 1e-7){cnt++; continue;}

                if(power >=0  ){
    if (po(k,power)== curr)
cnt++;

}

                }
}
            cout << cnt ;



return 0;
}



