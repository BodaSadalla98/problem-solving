#include <bits/stdc++.h>
using namespace std;

int result = 1;
int memo[101][101];

vector<string> res;
vector<string> boda;

void print (vector<string> v)
{

    for(int i = v.size()-1; i>=0 ; i--)
    {

        cout << v[i] << ' ';
    }
   cout << endl;
}


int lcs (vector<string> a , vector<string> b , int n , int m)
{
    if(memo[n][m] != -1) return memo[n][m];
    if(n == a.size()-1 || m ==b.size()-1) return 1;
    if(a[n] == b[m])
    {
        res.push_back(a[n]);
        return memo[n][m]=1+lcs(a,b , n+1 ,m+1);
    }


    else
    {
        int temp1 = lcs (a,b , n+1 ,m);
        int temp2 = lcs (a,b , n ,m+1);
        return memo[n][m]= max (temp1 , temp2);
    }
}




void lcs1 (vector<string> a , vector<string> b , int n , int m)
{
    for(int i =0 ; i<=n; i++)
    {
        for(int j=0; j<=m ; j++)
        {
            if (i == 0 || j == 0)
                memo[i][j] = 0;

             else if(a[i-1] == b[j-1]){

             memo[i][j] = 1+ memo[i-1][j-1];
            }

            else
             memo[i][j] = max(memo[i-1][j] , memo[i][j-1]);
        }
    }

   // backtraking
    int x=n;int y=m;
    while (x >= 0 && y>= 0)
    {
        if(memo[x][y] == max (memo[x-1][y] , memo[x][y-1])){
            if(memo[x][y]==memo[x-1][y])
            {
                x--;
            }
            else y--;
         }
        else{
            boda.push_back(a[x-1]);
            x--;y--;
        }
    }

}



int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
  #endif



  string s1,s2;
    vector <string> a,b;
    int counter =0;

  while(getline(cin,s1)){

        a.clear(); b.clear();

        if(s1!="#"){
            istringstream is(s1);
            while(is>>s2) a.push_back(s2);

            while(getline(cin,s1)){
                if(s1=="#") break;
                istringstream is(s1);
                while(is>>s2) a.push_back(s2);
            }
        }

        while(getline(cin,s1)){
            if(s1=="#") break;
            istringstream is(s1);

            while(is>>s2) b.push_back(s2);
}

    memset (memo , 0 , sizeof(memo));
    lcs1(a,b,a.size(),b.size());
    print(boda);
    a.clear() , b.clear() , boda.clear();
    counter=0;

}
    return 0;
}
