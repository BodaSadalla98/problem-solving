#include <iostream>

using namespace std;

int main()
{
   int n;cin>>n;
int arr[3];
for(int i=0;i<n;i++){
string s;
    cin>>s;
arr[0]=0;
arr[1]=0;
arr[2]=0;
int a,b,c,d,e,f;
bool haslow=0,hasupper=0,hasdegit =0;
bool ed=0,eu=0,el=0;
for(int j=0;j<s.size();j++){


if(s[j]>='0'&&s[j]<='9'){

hasdegit=1;
if(arr[0]<2)arr[0]++;
if(arr[0]==1)a=j;
else if(arr[0]==2){b=a+1;ed=1;}
}

   if(s[j]>='A'&&s[j]<='Z'){
    hasupper=1;
if(arr[1]<2)arr[1]++;
if(arr[1]==1)c=j;
else if(arr[1]==2){d=c+1;eu=1;}

}
if(s[j]>='a'&&s[j]<='z'){
    haslow=1;
if(arr[2]<2)arr[2]++;
if(arr[2]==1)e=j;
else if(arr[2]==2){f=e+1;el=1;}

}


}
if(!hasdegit){
if(arr[1]==1&&eu){
     s[d]='1';


}
else if (arr[1]==2){
    s[c]='1';
arr[1]--;
}

else if(arr[2]==1&&el){
     s[f]='1';

}
else if(arr[2]==2){
     s[e]='1';
arr[2]--;
}



}
if(!hasupper){
    if(arr[0]==1&&ed){
     s[b]='A';

}
else if(arr[0]==2){
     s[a]='A';
arr[0]--;
}
else if(arr[2]==1&&el){
     s[f]='A';

}
else if(arr[2]==2){
     s[e]='A';
arr[2]--;
}

}
if(!haslow){
    if(arr[0]==1&&ed){
     s[b]='a';

}
else if(arr[0]==2){
     s[a]='a';
arr[0]--;
}

else if(arr[1]==1&&eu){
     s[d]='a';

}

else if(arr[1]==2){
     s[c]='a';
arr[1]--;
}

}
cout<<s<<endl;
}
    return 0;
}
