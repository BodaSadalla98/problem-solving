#include <iostream>
#include "bits/stdc++.h"

using namespace std;
     vector<string> v;
void removeDupWord(string str)
{
   string word = "";
   for (auto x : str)
   {
       if (x == ' ')
       {
           v.push_back(word);
           word = "";
       }
       else
       {
           word = word + x;
       }
   }
    v.push_back(word);
}

int main()
{

        string a;
        getline(cin,a);
        removeDupWord(a);
        set<string> operators = {"+","-","*","/","tan","^"};
    stack<string> st;
    string s;
    int n = v.size();
    int i = 0;
    string ans = "";
    bool can =1;
    while(i<n){
            s = v[i++];
            if(operators.find(s) == operators.end())st.push(s);

            else
            {
                string temp = "";

                if(s == "tan"){
                         if(st.size() < 1){can=0;break;}
                    string top = st.top();
                    st.pop();
                    temp = "(tan(" + top + "))";
                    st.push(temp);

                }
                else
                {
                        if(st.size() < 2){can=0;break;}
                    string op1 = st.top();
                    st.pop();
                    string op2 = st.top();
                    st.pop();
                    temp = "(" + op2 + s + op1 + ")";
                    st.push(temp);


                }

            }



    }
        if (can)
        cout<<st.top();
else
    cout<<"NO";
    return 0;
}
