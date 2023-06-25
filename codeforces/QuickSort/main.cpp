#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>arr;

int my_partition(int l, int r ){
        int m = (l+r)/2;
            int pivot_index;
    int pivot = min(arr[r],arr[l]);
        pivot= min(pivot,arr[m]);
            if (pivot==arr[l])pivot_index=l;
            else if (pivot==arr[r])pivot_index=r;
            else
                     pivot_index=m;

  //  int pivot = arr[r];
        int i= l-1;
            for(int j=l;j<=r;j++){
                    if(j==pivot_index)continue;
                    if(pivot>=arr[j]){
                        i++;
                        if(i==pivot_index)i++;
                        int t=0;
                      t  =arr[i];
                        arr[i]=arr[j];
                        arr[j]=t;
                    }
            }
                        int t;
                       t= arr[pivot_index];
                        arr[pivot_index]=arr[i+1];
                        arr[i+1]=t;
        return i+1;






}
void quicksort(int l, int r){
        if(l<r){

            int pi = my_partition(l,r);
                quicksort(l,pi-1);
                quicksort(pi+1, r);



}



}
int main()
{
   int n;
cin>>n;
arr.resize(n);
for(int i=0;i<n;i++)cin>>arr[i];

quicksort(0,n-1);
for(int i=0;i<n;i++)cout<<arr[i]<<' ';
    return 0;
}
