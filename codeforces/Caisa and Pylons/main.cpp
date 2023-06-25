#include <iostream>

using namespace std;
int arr[100000];
int main()
{
    int n;

    long long  coin=0;

    int energy=0;
    cin>>n;
    cin>>coin;
    arr[0] = coin;
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i-1] > arr[i])energy += arr[i-1]-arr[i];
        else
            energy -= arr[i] - arr[i-1];


       if (energy < 0 ){coin += -1* energy; energy=0;}
    }



cout <<coin;
    return 0;
}
