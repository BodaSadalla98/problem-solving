#include <iostream>

using namespace std;
string s[501];
int dx[4]={-1,-1,1,1};
int dy[4]={1,-1,1,-1};
int main()
{int n;
cin>>n;
int ans=0;
    for(int i=0;i<n;i++)cin>>s[i];

    for(int i=1;i<n-1;i++){
    for(int j=1;j<n-1;j++)
    {
        if(s[i][j]=='X')
        {


        bool cool=1;
        for(int k=0;k<4;k++){
            int newx=i+dx[k];
            int newy=j+dy[k];
        if(s[newx][newy]!='X')
            cool=0;

        }

        if(cool)ans++;
        }
    }
    }
    cout << ans << endl;
    return 0;
}
