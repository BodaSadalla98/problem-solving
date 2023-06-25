#include <iostream>

using namespace std;

int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int currnt=s;
    int arr[n];
    int c=0;

    for(int i=0;i<n;i++){cin>>arr[i]; }

    bool same=0;
    for(int i=0;i<n-1;i++)
    {
            if(s==t){

                break;

    }

    if(arr[i]==currnt)currnt=arr[i+1];


    else if(arr[i+1]==currnt)currnt=arr[i];
    if(currnt==t){c=i+1;same=1;break;}



    }
    if(s==t)cout<<0;
    else if(same==0&&c==0)cout<<-1;
    else if (same)
        cout<<c;

    return 0;
}
