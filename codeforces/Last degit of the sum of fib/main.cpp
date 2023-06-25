#include <iostream>
#include <iostream>
#include<bits/stdc++.h>



std::vector  <int> v;

int main() {
    long long n, m;
    std::cin >> n ;


    bool found=1;
m=10;
v.resize(10*m);
int st=0;
for(int i=0;i<=10*m;i++){

if(i<=1)v[i]=i;
else

{


    long long t1,t2,t3;
t1=v[i-1];
t2=v[i-2];

t3=((t1)+(t2));
v[i]=(t3)%60;
}

}

for(int i=0;i<m;i++)
for(int j=i+1;j<10*m;j++){
  if(v[i]==v[j]&&st==0){
     int step= j-i;
found =1;
int temp=step;
int temp2=temp;
   for (step;step<=10*m;step+=temp2){
  if(v[i]!=v[step]) {

found=0;
break;
}
   }
if(found){
for(int k=1;k<temp;k++){
for(int l=k+temp;l<10*m;l+=temp)
if(v[l]!=v[k])found=0;
break;
}

}

if(found){

st=temp;
break;
}
if(st!=0)break;
}

if(st!=0)break;


}
int ans[60];

for(int i=0;i<=70;i++)std::cout<<v[i]<<"   ";
ans[0]=0;
for(int i =1;i<60;i++){
    ans[i]= (ans[i-1]+v[i])%10;


}
std::cout<<ans[n%60];
return 0;
}
