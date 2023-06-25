#include <iostream>

using namespace std;

int main()
{
   int n;
cin>>n;
string s;
cin>>s;
string s1=s;


for(int i=1;i<n;i++){
     string s2="";
if(n%(i+1)==0){

for(int j=i;j>=0;j--){
s2+=s1[j];


}
for(int k=i+1;k<n;k++)
s2+=s1[k];



s1=s2;
}

}

cout<<s1<<endl;
    return 0;
}
