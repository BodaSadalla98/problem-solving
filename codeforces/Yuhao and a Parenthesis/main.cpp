#include <iostream>
#include<algorithm>
int visa[500005],visb[500005];
int sum;
using namespace std;

int main()
{
    cin.tie(0);

    int n,a,b;
    string s;
    cin>>n;
    bool wrong=0;
    int  t1;
    for(int i=0;i<n;i++){
            a=0;b=0;
        cin>>s;

        wrong=0;
        t1=0;

        for(int j=0;j<s.size();j++){
            if(s[j]=='(')a++;
            else
                b++;





                if(wrong){
                        if(s[j]=='(')t1++;
                        else
                                t1--;
                }

                if(b>a && j+1<s.size() &&s[j]==')'&& s[j+1]== '(' ){
                    t1=0;
                  //  wrong=1;
                    for(int l=s.size()-1; l>j;l--)s[l]=='(' ? t1++ : t1-- ;
                        if(t1>0)wrong=1;
                }
                if(wrong)break;








        }

        if(wrong )continue;

            if(a>= b)
        visa[a-b]++;
        else

        visb[b-a]++;


    }

    sum+= visa[0]/2;
        for(int i=1;i<= 5*1e5;i++)
       sum+= min(visa[i],visb[i]);



    cout << sum << endl;
    return 0;
}
