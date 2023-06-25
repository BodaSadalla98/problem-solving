#include <iostream>

using namespace std;
int arr[200002];
int freq[200002];
int main()
{
    int pos=0,neg=0;
    int n; cin>>n;
    cin>>arr[0];
    freq[0] =  (arr[0]>0)?  1 : -1 ;
     freq[0]>0 ? pos++ : neg ++;
    for(int i=1;i<n;i++){
        cin>>arr[i];

        freq[i] = (arr[i] * freq[i-1]) >0  ? 1 : -1 ;
         freq[i]>0 ? pos++ : neg ++;


    }

     for(int i=1;i<n;i++)
        for(int j=i;j<n;j++)
     {



                (freq[j]* freq[i-1]) >0 ? pos++ : neg ++;




     }

    cout <<neg<<' '<< pos;
    return 0;
}
