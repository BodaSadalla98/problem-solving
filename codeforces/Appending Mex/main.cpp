#include <iostream>
#include<bits/stdc++.h>

int arr[100001];
using namespace std;

int main()
{
int n;
    cin>>n;
    int maxElemnt=-1;
    for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(i==0&& temp!=0){ cout<<"1"; return 0;}
                    if(temp- maxElemnt > 1 ){
                    cout<<i+1; return 0;

            }
            maxElemnt= max(maxElemnt, temp);

        }

    cout << "-1" << endl;
    return 0;
}
