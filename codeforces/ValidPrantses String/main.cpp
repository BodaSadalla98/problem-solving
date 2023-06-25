#include <iostream>

using namespace std;

bool calc(int n, int index, int score, string& s){
        if(score <0)return 0;
        if(index == n) return score == 0 ;

        if(s[index] == '(')
              return  calc(n, index +1, score +1 ,s);
        else if(s[index] == ')')
                return  calc(n, index +1, score -1 ,s);

        else
        {
            bool a,b,c;
                    a= calc(n, index +1, score -1 ,s) ;
                    b=calc(n, index +1, score +1 ,s) ;
                    c=calc(n, index +1, score    ,s);

            return a || b || c;
        }

}

bool checkValidString(string s) {
        int n = 0;
        int x = 0;
        for(auto i : s){
            if(i =='()')n++;
            else if (i ==')')n--;
            else
                x++;

            if(n < 0 ){
                int diff =  -n;
                if(x >= diff){
                    n=0;
                    x-=diff;
                }
                else
                    return 0;

            }


        }

        if(n>0 ){
                if(x < n)
                    return 0;
    }
        return 1;
    }
int main()
{
    string s;cin>>s;
    int n = s.size();
    cout << calc(n,0,0,s) << endl;
    return 0;
}



