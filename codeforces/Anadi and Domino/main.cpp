#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int domino [7][7];
vector<vector<int>>v;
int ans =0;
int n;
int no [8];
void g( int node, int pieces) {


                ans = max(ans, pieces);




            for(int i=0; i< v[node].size();i++){

                            int cu  = v[node][i];
                    for(int j=1;j<7;j++)
                    for(int k=1;k<7;k++){
                            if( no [node] == j  && (no[cu] == -1  ) && domino [j][k]==0){
                                    domino[j][k]=1;
                                    no[cu] = k;
                                g(v[node][i], pieces +1 );
                                domino[j][k]=0;
                                no[cu]  = -1;
                            }

                    }





            }



}



int main()
{

    int m; cin>>n>>m;
       v.resize(n+1);
    for(int i=0;i<m;i++){
        int a,b ; cin>>a>>b;


        v[a].push_back(b);
        v[b].push_back(a);



    }
for(int i=1;i<=n;i++){
       memset( no, -1 , sizeof no);
       no[i]=1;
    g(i,0);

    }
    cout << ans<< endl;
    return 0;
}
