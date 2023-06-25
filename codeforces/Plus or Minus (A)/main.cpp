#include <iostream>
#include<vector>
using namespace std;
vector<int >numbers;
int counter=100000;
int withchange[301];
int withoutchange[301];
int n;
void min_changes(int index,int cnt, int sum, int sign){
sum+= (numbers[index]*sign);
if(sum ==0&&index==n-1)counter = min(counter,cnt);
if(index>= n-1)return;


min_changes(index+1,cnt+1,sum,-1);


min_changes(index+1,cnt,sum,1);

}

int main()
{
cin>>n;
numbers.resize(n);

cin>>numbers[0];
for(int i=1;i<n;i++){
    char c;
int x;
cin>>c>>x;
    if(c=='-')numbers[i]= -1*x;
else
    numbers[i]=x;
}

//for(int i=0;i<n;i++)cout<<numbers[i];
min_changes(0,0,0,1);
if(counter>20)counter=-1;
cout<<counter;

    return 0;
}
