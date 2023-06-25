#include <iostream>

using namespace std;

int main()
{

    int a,b,c,d,ans;
    cin>>a>>b>>c>>d;
   if(a==c && b==d)
    ans = 0;
  else if(a+b == c+d || a-b == c-d || (abs(a-c)+abs(b-d) ) <=3)
    ans = 1;

    else if (a+b == c-d || a-b== c+d)
        ans = 2;
    else
        ans =3;


    cout << ans << endl;
    return 0;
}
