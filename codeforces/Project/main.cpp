#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()



{

    vector<vector<pair<float,string>>> v;

    int n;
    string eqns[100];
    string prober_eqns[100];
    cin>>n;
 v.resize(n);
    for(int i=0;i<n;i++){
 int temp=0;
 bool secondHalf =false;

         cin>>eqns[i];
         for(int  j=0; j<eqns[i].size();j++){

         if(eqns[i][j]=='+'||eqns[i][j]=='-'||eqns[i][j]=='='||j==(eqns[i].size()-1)){
                if(eqns[i][j]=='=')secondHalf=true;

                int range=0;
               j==(eqns[i].size()-1)?  range=j-temp+1: range=j-temp;
                string sub= eqns[i].substr(temp,range);
         cout<<sub<<endl;
         for(int k=0;k<sub.length();k++){

            string coff , var;
            if(sub[k]>'9')
            {
                coff= sub.substr(0,k);
                var=sub.substr(k,sub.length());
                pair<float,string> p;
                float f= atof(coff.c_str());
                p.first=f;p.second=var;
                v[i].push_back(p);
                for(int h=0;h<v.size();h++){
                    for(int l=0;l<v[h].size();l++){
                            pair<float,string> pp=v[h][l];

                //    cout<<pp.first<<"     "<<pp.second<<endl;

                    }

                }


                //Search here if this var already existed
            }
           // cout<<coff<<"    "<<var;

         }





            temp=j+1;
         }


         }

    }




    return 0;
}
