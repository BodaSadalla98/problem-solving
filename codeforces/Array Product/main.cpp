#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> zeros;

bool pos=0;
int n,mini=INT_MIN,ncount=0,negative;
cin>>n;
int onlyzero=-1;
vector<int> numbers;
numbers.resize(n);
/**
for(int i=0;i<n;i++)
    numbers[i]=0;
**/

for(int i=0;i<n;i++){
int temp;
cin>>temp;
if(temp>0)pos=1;
numbers[i]=temp;
    if(temp==0){

zeros.push_back(i);
onlyzero=i;
}

if(temp<0){
    if(mini<temp){
    mini=temp;
negative=i;
}
//negative=max(negative,temp);

ncount++;
}

}



for(int i=0;i<zeros.size()-1&&zeros.size()!=0;i++){
numbers[zeros[i]]=0;

cout<<"1"<<" "<<zeros[i]+1<<' '<<zeros[i+1]+1<<endl;

}

if(ncount==1&&zeros.size()>0){
    cout<<"2"<<" "<<negative+1<<endl;
}
else  if(ncount%2!=0&&zeros.size()>0){
numbers[onlyzero]=0;
numbers[negative]=0;
cout<<"1"<<" "<<onlyzero+1<<" "<<negative+1<<endl;
cout<<"2"<<" "<<negative+1<<endl;

}


 else if(ncount%2!=0&&zeros.size()==0){
    cout<<"2"<<" "<<negative+1<<endl;
      numbers[negative]=0;
}
else if(ncount%2==0&&(ncount!=0||pos==1)&&zeros.size()>0){

cout<<"2"<<" "<<onlyzero+1<<endl;
}

for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++){
if(numbers[i]!=0&&numbers[j]!=0){
  cout<<"1"<<" "<<i+1<<" "<<j+1<<endl;
numbers[i]=0;

}


}



    return 0;
}
