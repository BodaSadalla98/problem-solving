#include <iostream>

using namespace std;

  string  s;
string opt;
 int arr[1001];
string flip(int index){
            string ret = opt;

if(index%2){
       for(int i=0;i<= index/2;i++){
        char temp = ret[i];
        ret[i]= ret[index-i];
        ret[index-i]= temp;


}


}
    else {

    for(int i=0;i<= index/2;i++){
        char temp = ret[i];
        ret[i]= ret[index-i];
        ret[index-i]= temp;

}

}
        return ret;
}


bool smaller(string s1, string s2){
            if(s2.size()>s1.size())return 0;

        for(int i=0;i<s1.size();i++)
                if(s1[i] < s2[i])return 1;
                else if (s1[i] > s2[i])return 0;




    return 1;
}


int main()
{

    int smallest =0;
        cin>>s;
     opt= s;
for(int i =0;i<s.size();i++)
{
    string flipped = flip(i);
    if( smaller(flipped, opt) ){
            opt= flipped;
            arr[i]=1;

}


}
for(int i =0;i<s.size();i++)cout<<arr[i]<<' ' ;

    return 0;
}
