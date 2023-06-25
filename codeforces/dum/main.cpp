#include <iostream>
#include<bits/stdc++.h>
#include<vector>
int numbers[101];
int freq[100];
std::vector<int>nice;
std::vector<int>cbb;
using namespace std;

int main()
{
int cool=0,both=0;
int n;cin>>n;
for(int i=0;i<n;i++){
int temp;
cin>>temp;
numbers[i]=temp;
freq[temp]++;

}



for(int i=0;i<=100;i++){

if(freq[i]==1)cool++;
else if (freq[i]>2)both++;
}

int  h = cool/2;
bool m5lst4both=1;
if(cool%2==1&&both<1){cout<<"NO";
return 0;}

else if (cool%2==0){
cout<<"YES"<<endl;
for(int i=0;i<n;i++){
    int t = numbers[i];
    if(freq[t]==1&&h>0){cout<<"A";h--;}
else
    cout<<"B";
}


}

else if (cool%2==1&&both>=1){
cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
    int t=numbers[i];
     if(freq[t]==1&&h>0){cout<<"A";h--;}
else if (freq[t]>2&&m5lst4both){
m5lst4both=0;

cout<<"A";
}
else
    cout<<"B";
}


}



















    return 0;
}
